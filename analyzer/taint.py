"""污点分析引擎。

设计要点
========
1. 函数内：变量名 -> TaintFact 集合的状态，按语法顺序遍历语句；
   表达式后序求值（identifier 查状态，调用按 source/propagator/sink
   分类，binary_expression 的 std::string operator+ 做并集传播）。
2. 函数间：每个 FunctionInfo 计算摘要（哪些参数索引能到 sink、返回值是否
   带污点），跨编译单元按调用边迭代到不动点。静态库拼接函数、shell 包装、
   函数指针表都通过摘要与显式补边处理，不依赖单一 TU 内可见性。
3. 净化：识别 `if (x == NULL || !cmd_allowlist_ok(x)) return ...` 早退守卫，
   以及 strchr(x,';') / strlen 长度 / strncmp 前缀守卫；命中后变量转 clean。
   参数化 exec（argv 不经 sh -c）在 sink 判定处直接算净化。
"""
from __future__ import annotations

from .config import AnalyzerConfig, EXEC_SINKS, SHELL_SINKS
from .models import Finding, FunctionInfo, TaintFact
from .parser_index import _declarator_identifier, callee_name, child, fchild, node_text

# 显式建模的 out 形参传播器。
# 元组语义：(out 实参索引, 污点入参索引集合, 变参起始索引)
# 变参起始索引非 None 时，从该索引到末尾的所有实参都参与污点并集。
OUT_PROPAGATORS = {
    "snprintf": (0, set(), 3),     # snprintf(out, n, fmt, ...)
    "sprintf": (0, set(), 2),      # sprintf(out, fmt, ...)
    "asprintf": (0, set(), 2),
    "strncpy": (0, {1}, None),
    "strcpy": (0, {1}, None),
    "strncat": (0, {1, 2}, None),
    "strcat": (0, {1, 2}, None),
    # cmd_join3 刻意不在此表：它是跨编译单元的库拼接，走函数摘要 out_params，
    # 以便在污点事实上打 [cross-TU] 标记、归类 static_lib_hop。
    "memcpy": (0, {1}, None),
    "memmove": (0, {1}, None),
}

# 返回值直接继承污点入参的纯函数式传播器
PURE_PROPAGATORS = {
    "cmd_trim": {0},
    "strdup": {0},
    "strndup": {0},
    "strstr": {0, 1},
    "strchr": {0},
}

SHELL_LITERALS = {"sh", "/bin/sh", "bash", "/bin/bash"}
PARAM_SOURCE = "param"


class TaintEngine:
    def __init__(self, files, cfg: AnalyzerConfig):
        self.files = files
        self.cfg = cfg
        self.funcs: dict[str, FunctionInfo] = {}
        self.tables: dict[str, list[tuple[str, str, int]]] = {}
        self.macros: dict[str, str] = {}
        self.findings: list[Finding] = []
        self._seen: set[tuple[str, int]] = set()
        self._build_global_index()

    def _build_global_index(self) -> None:
        for pf in self.files.values():
            for name, info in pf.functions.items():
                self.funcs[name] = info
            for table in pf.funcptr_tables:
                self.tables[table.var_name] = [
                    (e.name_literal, e.handler, e.line) for e in table.entries]
            self.macros.update(pf.macros)

    def run(self) -> list[Finding]:
        self._compute_summaries()
        for info in self.funcs.values():
            _FuncContext(self, info, summary_mode=False).analyze()
        self.findings.sort(key=lambda f: (f.file, f.line))
        return self.findings

    def _compute_summaries(self) -> None:
        for _ in range(12):
            changed = False
            for info in self.funcs.values():
                ctx = _FuncContext(self, info, summary_mode=True)
                ctx.analyze()
                sink_params = set(ctx.param_sink_indices)
                out_params = set(ctx.param_out_indices)
                returns = bool(ctx.returns_taint)
                sink_lines = sorted(ctx.sink_lines)
                if (sink_params != info.sink_params
                        or out_params != info.out_params
                        or returns != info.returns_taint
                        or sink_lines != info.sink_lines):
                    info.sink_params = sink_params
                    info.out_params = out_params
                    info.returns_taint = returns
                    info.sink_lines = sink_lines
                    changed = True
            if not changed:
                break

    def is_macro_sink_wrapper(self, name: str) -> bool:
        return self.macro_wrapped_sink(name) in SHELL_SINKS

    def macro_wrapped_sink(self, name: str) -> str:
        macro = self.macros.get(name)
        if macro is None:
            return ""
        body = macro.body
        return body.split("(", 1)[0].strip() if body else ""


class _FuncContext:
    def __init__(self, engine: TaintEngine, info: FunctionInfo, summary_mode: bool):
        self.engine = engine
        self.info = info
        self.summary_mode = summary_mode
        self.src = engine.files[info.file].source
        self.vars: dict[str, set[TaintFact]] = {}
        # tmpl_vars 容器变量名 -> {键: 污点事实}（轻量容器模型）
        self.containers: dict[str, dict[str, set[TaintFact]]] = {}
        self.param_sink_indices: set[int] = set()
        self.param_out_indices: set[int] = set()
        self.returns_taint: bool = False
        self.sink_lines: set[int] = set()
        self._param_names: dict[str, int] = {p.name: p.index for p in info.params}
        if summary_mode:
            for p in info.params:
                self.vars[p.name] = {TaintFact(PARAM_SOURCE, p.index)}

    def analyze(self):
        body = fchild(self.info.node, "body", "compound_statement")
        if body is not None:
            for stmt in body.children:
                self.statement(stmt)

    def text(self, node) -> str:
        return node_text(node, self.src)

    # ================================================================ 语句

    def statement(self, node) -> None:
        t = node.type
        if t == "declaration":
            self._declaration(node)
        elif t == "expression_statement":
            expr = fchild(node, "expression", "call_expression", "assignment_expression",
                          "binary_expression", "update_expression")
            if expr is not None:
                self._evaluate(expr)
        elif t == "if_statement":
            self._if_statement(node)
        elif t in ("for_statement", "while_statement", "do_statement"):
            self._loop(node)
        elif t == "return_statement":
            val = fchild(node, "value", "call_expression", "identifier",
                         "binary_expression", "subscript_expression", "cast_expression",
                         "conditional_expression", "string_literal", "number_literal")
            if val is not None and self._evaluate(val):
                self.returns_taint = True
        elif t == "compound_statement":
            for sub in node.children:
                self.statement(sub)
        elif t == "switch_statement":
            body = fchild(node, "body", "compound_statement")
            if body is not None:
                for sub in body.children:
                    self.statement(sub)

    def _declaration(self, node) -> None:
        for sub in node.children:
            if sub.type != "init_declarator":
                continue
            name_node = _declarator_identifier(fchild(sub, "declarator"))
            value = fchild(sub, "value")
            if name_node is None or value is None:
                continue
            facts = self._evaluate(value)
            name = self.text(name_node)
            if facts:
                self.vars[name] = set(facts)
            else:
                self.vars.pop(name, None)

    def _if_statement(self, node) -> None:
        cond = fchild(node, "condition", "condition_clause")
        # 穿透 condition_clause / 括号，拿到真正的条件表达式
        while cond is not None and cond.type in ("condition_clause", "parenthesized_expression"):
            cond = fchild(cond, "value", "binary_expression", "unary_expression",
                          "call_expression", "identifier", "parenthesized_expression")
        guarded = self._sanitizer_guards(cond) if cond is not None else set()
        # 条件表达式本身可能含传播调用（if (cmd_join3(...) < 0)），要求值触发副作用
        if cond is not None:
            self._evaluate(cond)
        saved = None
        if guarded:
            saved = {k: set(v) for k, v in self.vars.items()}
            for name in guarded:
                self.vars.pop(name, None)
        cons = fchild(node, "consequence", "compound_statement", "if_statement")
        if cons is not None:
            self._run_branch(cons)
        if guarded and not self._branch_terminates(cons):
            self.vars = saved
        alt = fchild(node, "alternative")
        if alt is not None:
            if alt.type == "else_clause":
                alt = child(alt, "compound_statement", "if_statement")
            if alt is not None:
                if guarded:
                    cur = self.vars
                    self.vars = saved
                    self._run_branch(alt)
                    self.vars = cur
                else:
                    self._run_branch(alt)

    def _run_branch(self, node) -> None:
        if node.type == "compound_statement":
            for sub in node.children:
                self.statement(sub)
        else:
            self.statement(node)

    def _loop(self, node) -> None:
        cond = fchild(node, "condition", "condition_clause")
        while cond is not None and cond.type in ("condition_clause", "parenthesized_expression"):
            cond = fchild(cond, "value", "binary_expression", "unary_expression",
                          "call_expression", "identifier", "parenthesized_expression")
        if cond is not None:
            self._evaluate(cond)
        body = fchild(node, "body", "compound_statement")
        if body is not None:
            self._run_branch(body)

    # ============================================================= 净化守卫

    def _sanitizer_guards(self, cond) -> set[str]:
        guarded: set[str] = set()
        for sub in self._walk_for_calls(cond):
            if sub.type != "call_expression":
                continue
            cname = callee_name(sub, self.src)
            args = self._call_args(sub)
            if not args:
                continue
            if (cname in self.engine.cfg.sanitizers
                    or cname in ("strchr", "strlen", "strncmp", "strcmp")):
                guarded |= self._arg_var_names(args[0])
        return guarded

    def _walk_for_calls(self, node):
        if node is None:
            return
        stack = [node]
        while stack:
            cur = stack.pop()
            if cur.type == "call_expression":
                yield cur
                continue  # 调用内部不再下钻，避免把 source 调用误当守卫
            stack.extend(cur.children)

    def _arg_var_names(self, node) -> set[str]:
        out: set[str] = set()
        if node is None:
            return out
        if node.type == "identifier":
            out.add(self.text(node))
        for child in node.children:
            out |= self._arg_var_names(child)
        return out

    def _branch_terminates(self, branch) -> bool:
        if branch is None:
            return False
        if branch.type != "compound_statement":
            return branch.type == "return_statement"
        for sub in branch.children:
            if sub.type == "return_statement":
                return True
        return False

    # ================================================================ 表达式

    def _evaluate(self, node) -> set[TaintFact]:
        t = node.type
        if t == "identifier":
            return set(self.vars.get(self.text(node), set()))
        if t in ("string_literal", "number_literal", "char_literal",
                 "null", "true", "false"):
            return set()
        if t == "parenthesized_expression":
            inner = fchild(node, "expression")
            return self._evaluate(inner) if inner is not None else set()
        if t == "binary_expression":
            return self._binary(node)
        if t == "assignment_expression":
            return self._assignment(node)
        if t in ("update_expression", "unary_expression"):
            arg = fchild(node, "argument")
            return self._evaluate(arg) if arg is not None else set()
        if t == "call_expression":
            return self._call(node)
        if t == "field_expression":
            # cmd.c_str() 无参时等价于读取 cmd 的字符串内容
            base = fchild(node, "argument", "identifier")
            if base is not None:
                return set(self.vars.get(self.text(base), set()))
            return set()
        if t == "subscript_expression":
            base = fchild(node, "argument")
            if base is not None and base.type == "identifier":
                return set(self.vars.get(self.text(base), set()))
            return set()
        if t == "conditional_expression":
            out: set[TaintFact] = set()
            for sub in node.children:
                if sub.type not in ("?", ":"):
                    out |= self._evaluate(sub)
            return out
        if t == "cast_expression":
            val = fchild(node, "value")
            return self._evaluate(val) if val is not None else set()
        out = set()
        for sub in node.children:
            out |= self._evaluate(sub)
        return out

    def _binary(self, node) -> set[TaintFact]:
        op = ""
        operands = []
        for sub in node.children:
            if sub.type in ("+", "==", "!=", "<", ">", "<=", ">=", "&&", "||",
                            "=", "%", "|", "&"):
                op = sub.type
            elif sub.type not in (",",):
                operands.append(sub)
        if not operands:
            return set()
        if op == "+":
            result: set[TaintFact] = set()
            for sub in operands:
                result |= self._evaluate(sub)
            return result
        # 比较 / 逻辑运算产出布尔值，不携带字符串污点；
        # 但操作数里的调用（如 if (cmd_join3(...) < 0)）有传播副作用，必须求值
        for sub in operands:
            self._evaluate(sub)
        return set()

    def _assignment(self, node) -> set[TaintFact]:
        sides = [s for s in node.children if s.type not in ("=", "+=", "-=", "*=")]
        if len(sides) < 2:
            return set()
        left, right = sides[0], sides[1]
        facts = self._evaluate(right)
        if left.type == "subscript_expression":
            # argv[i] = x：按数组合并污点，NULL/常量元素不清空已有污点
            base = fchild(left, "argument", "identifier")
            if base is not None and facts:
                name = self.text(base)
                self.vars[name] = set(self.vars.get(name, set())) | facts
            return facts
        target = self._assign_target(left)
        if target is not None:
            if facts:
                self.vars[target] = set(facts)
            else:
                self.vars.pop(target, None)
        return facts

    def _assign_target(self, node) -> str | None:
        if node is None:
            return None
        if node.type == "identifier":
            return self.text(node)
        if node.type == "subscript_expression":
            base = fchild(node, "argument")
            return self.text(base) if base is not None and base.type == "identifier" else None
        if node.type == "field_expression":
            ident = fchild(node, "field", "field_identifier")
            return self.text(ident) if ident is not None else None
        if node.type == "binary_expression":
            # out + used 这类指针算术：取左侧标识符基址
            for sub in node.children:
                if sub.type == "identifier":
                    return self.text(sub)
        if node.type == "pointer_expression":
            return self._assign_target(fchild(node, "argument"))
        return self._assign_target(fchild(node, "argument"))

    # ------------------------------------------------------------------ 调用

    def _call_args(self, call_node):
        args = fchild(call_node, "arguments", "argument_list")
        if args is None:
            return []
        return [c for c in args.children if c.type not in (",", "(", ")")]

    def _call(self, node) -> set[TaintFact]:
        name = callee_name(node, self.src)
        args = self._call_args(node)
        arg_facts = [self._evaluate(a) for a in args]

        # 对象方法调用 cmd.c_str() / std::string(...).c_str()：无参时透传对象污点
        fn = fchild(node, "function", "field_expression", "qualified_identifier",
                    "identifier")
        if fn is not None and fn.type == "field_expression" and not args:
            base = fchild(fn, "argument", "identifier", "call_expression")
            if base is not None:
                return self._evaluate(base)

        if name in self.engine.cfg.sources:
            return {TaintFact(self.engine.cfg.sources[name], name)}

        if name in SHELL_SINKS:
            self._check_shell_sink(name, args, arg_facts, node)
            return set()

        if name in EXEC_SINKS:
            self._check_exec_sink(name, args, arg_facts, node)
            return set()

        if name in self.engine.cfg.shell_wrappers or self.engine.is_macro_sink_wrapper(name):
            self._check_wrapper_sink(name, args, arg_facts, node)
            return set()

        if name in OUT_PROPAGATORS:
            self._apply_out_propagator(name, args, arg_facts)
            return set()
        if name in PURE_PROPAGATORS:
            return self._union_indexed(arg_facts, PURE_PROPAGATORS[name])

        if name == "tmpl_var_set":
            self._tmpl_var_set(args, arg_facts)
            return set()
        if name == "tmpl_render":
            self._apply_tmpl_render(args, arg_facts)
            return set()

        indirect = self._try_indirect_call(node, args, arg_facts)
        if indirect is not None:
            return indirect

        return self._apply_callee_summary(name, args, arg_facts)

    # ------------------------------------------------------------ sink 判定

    def _check_shell_sink(self, name, args, arg_facts, node) -> None:
        if not args or not arg_facts[0]:
            return  # 常量命令 -> 良性
        self._report(name, node, arg_facts[0],
                     "popen_config" if name == "popen" else "concat_system")

    def _check_exec_sink(self, name, args, arg_facts, node) -> None:
        if not self._is_sh_c_form(name, args):
            return  # 参数化 exec：按 sanitizers.json 算净化
        idx = self._script_arg_index(name, args)
        if idx is not None and idx < len(arg_facts) and arg_facts[idx]:
            self._report(name, node, arg_facts[idx], "exec_arg_misuse")

    def _is_sh_c_form(self, name, args) -> bool:
        if name in ("execl", "execlp", "execle"):
            return any(a.type == "string_literal"
                       and self.text(a).strip('"') == "-c" for a in args)
        if args and self._string_value(args[0]) in SHELL_LITERALS:
            return True
        if len(args) >= 2 and self._argv_built_for_sh(args[1]):
            return True
        return False

    def _argv_built_for_sh(self, argv_node) -> bool:
        if argv_node.type != "identifier":
            return False
        arr = self.text(argv_node)
        for assign in self._iter_assignments():
            sides = [s for s in assign.children if s.type not in ("=", "+=", "-=", "*=")]
            if len(sides) < 2:
                continue
            left, rhs = sides[0], sides[1]
            if left.type != "subscript_expression":
                continue
            base = fchild(left, "argument")
            idx_node = fchild(left, "index")
            if (base is not None and self.text(base) == arr
                    and idx_node is not None and self.text(idx_node) == "0"
                    and self._string_value(rhs) in SHELL_LITERALS):
                return True
        return False

    def _iter_assignments(self):
        stack = [self.info.node]
        while stack:
            cur = stack.pop()
            if cur.type == "assignment_expression":
                yield cur
            stack.extend(cur.children)

    def _script_arg_index(self, name, args) -> int | None:
        if name in ("execl", "execlp", "execle"):
            for i, a in enumerate(args):
                if a.type == "string_literal" and self.text(a).strip('"') == "-c":
                    return i + 1 if i + 1 < len(args) else None
            return None
        return 1 if len(args) >= 2 else None

    def _check_wrapper_sink(self, name, args, arg_facts, node) -> None:
        sink_api = self.engine.macro_wrapped_sink(name) \
            if self.engine.is_macro_sink_wrapper(name) else name
        if name == "tmpl_exec":
            self._check_tmpl_exec(sink_api, args, arg_facts, node)
            return
        if not args or not arg_facts[0]:
            return
        variant = "macro_indirection" if self.engine.is_macro_sink_wrapper(name) \
            else "shell_wrapper"
        self._report(sink_api, node, arg_facts[0], variant)

    def _check_tmpl_exec(self, sink_api, args, arg_facts, node) -> None:
        if args and self._template_is_safe(args[0]):
            return
        facts: set[TaintFact] = set()
        if args:
            facts |= arg_facts[0]                      # 模板名带污点
            container = self._container_of(args[1]) if len(args) > 1 else None
            if container is not None:
                for key_facts in container.values():
                    facts |= key_facts
        if facts:
            self._report(sink_api, node, facts, "template_rendered")

    def _template_is_safe(self, node) -> bool:
        value = self._string_value(node)
        if not value:
            return False
        return value.replace("\\", "/").split("/")[-1] in self.engine.cfg.safe_templates

    # ------------------------------------------------------------- 传播器

    def _apply_out_propagator(self, name, args, arg_facts) -> None:
        out_idx, fixed_indices, varargs_from = OUT_PROPAGATORS[name]
        tainted: set[TaintFact] = set()
        for idx in fixed_indices:
            if idx < len(arg_facts):
                tainted |= arg_facts[idx]
        if varargs_from is not None:
            for idx in range(varargs_from, len(arg_facts)):
                tainted |= arg_facts[idx]
        if not tainted or out_idx >= len(args):
            return
        target = self._assign_target(args[out_idx])
        if target is not None:
            self.vars[target] = set(self.vars.get(target, set())) | tainted
            if self.summary_mode and target in self._param_names:
                # out 形参被污点入参写入：记录输出别名摘要
                if any(f.source == PARAM_SOURCE for f in tainted):
                    self.param_out_indices.add(self._param_names[target])

    def _union_indexed(self, arg_facts, indices) -> set[TaintFact]:
        out: set[TaintFact] = set()
        for idx in indices:
            if idx < len(arg_facts):
                out |= arg_facts[idx]
        return out

    def _tmpl_var_set(self, args, arg_facts) -> None:
        # tmpl_var_set(vars, "key", value)
        if len(args) < 3 or args[0].type != "identifier":
            return
        container = self.text(args[0])
        key = self._string_value(args[1]) or f"__{self.text(args[1])}"
        self.containers.setdefault(container, {})[key] = set(arg_facts[2])

    def _container_of(self, node):
        if node is not None and node.type == "identifier":
            return self.containers.get(self.text(node))
        return None

    def _apply_tmpl_render(self, args, arg_facts) -> None:
        # tmpl_render(tpl, vars, out, out_len)
        if len(args) < 3:
            return
        facts = set(arg_facts[0])  # 模板路径污点
        container = self._container_of(args[1])
        if container is not None:
            for key_facts in container.values():
                facts |= key_facts
        # 摘要：渲染输出 out(索引2) 恒依赖 tpl(0) 与 vars 容器(1)
        if self.summary_mode:
            self.param_out_indices.add(2)
            target = self._assign_target(args[2])
            if target is not None and target in self._param_names:
                # 让 out 形参带上参数污点，驱动函数内后续 system(out) 的 sink 摘要
                self.vars[target] = set(self.vars.get(target, set())) | {
                    TaintFact(PARAM_SOURCE, self._param_names[target])}
            return
        target = self._assign_target(args[2])
        if target is not None and facts:
            self.vars[target] = set(self.vars.get(target, set())) | facts

    # ---------------------------------------------------------- 间接调用

    def _try_indirect_call(self, node, args, arg_facts):
        fn = fchild(node, "function", "field_expression")
        if fn is None or fn.type != "field_expression":
            return None
        base = fchild(fn, "argument", "subscript_expression")
        if base is None or base.type != "subscript_expression":
            return None
        arr = fchild(base, "argument", "identifier")
        if arr is None or arr.type != "identifier":
            return None
        entries = self.engine.tables.get(self.text(arr))
        if entries is None:
            return None
        hit = False
        for _literal, handler, _line in entries:
            info = self.engine.funcs.get(handler)
            if info is None:
                continue
            for idx in info.sink_params:
                if idx >= len(arg_facts):
                    continue
                facts = arg_facts[idx]
                if self.summary_mode:
                    if facts:
                        self._mark_param_sinks(facts)
                    # 间接边把 handler 的 sink 行带到分发器摘要里
                    for sl in info.sink_lines:
                        self.sink_lines.add(sl)
                    hit = True
                elif facts:
                    self._report("system", node, facts, "funcptr_dispatch",
                                 line_override=(info.sink_lines[0]
                                                if info.sink_lines else None))
                    hit = True
                elif idx < len(args):
                    # 入口边界：分发器形参可被外部（控制面）直接控制，
                    # 即使本函数内无具体 source，也按外部输入补报
                    entry_fact = self._entry_fact_for(args[idx])
                    if entry_fact is not None:
                        self._report("system", node, {entry_fact},
                                     "funcptr_dispatch",
                                     line_override=(info.sink_lines[0]
                                                    if info.sink_lines else None))
                        hit = True
        return set() if hit else None

    def _entry_fact_for(self, arg_node) -> TaintFact | None:
        """把分发器/公开入口的形参构造成一条外部入口污点事实。"""
        name = None
        if arg_node.type == "identifier":
            name = self.text(arg_node)
        if name is None or name not in self._param_names:
            return None
        return TaintFact("entry_param", f"{self.info.name}({name})")

    def _mark_param_sinks(self, facts) -> None:
        for fact in facts:
            if fact.source == PARAM_SOURCE:
                self.param_sink_indices.add(fact.entry)

    # ---------------------------------------------------------- 函数摘要

    def _apply_callee_summary(self, name, args, arg_facts) -> set[TaintFact]:
        info = self.engine.funcs.get(name)
        if info is None:
            return set()
        if self.summary_mode:
            for idx in info.sink_params:
                if idx < len(arg_facts):
                    self._mark_param_sinks(arg_facts[idx])
        # out 参数别名：任一污点入参都可能经被调函数写进 out 实参
        # （如 cmd_join3(out, ..., tainted, ...)）。把全部污点入参搬到 out 变量。
        if info.out_params:
            tainted: set[TaintFact] = set()
            for facts in arg_facts:
                tainted |= facts
            cross_tu = info.file != self.info.file
            if cross_tu:
                tainted = {f.extend(f"[cross-TU]{name}") for f in tainted}
            for out_idx in info.out_params:
                if out_idx >= len(args):
                    continue
                target = self._assign_target(args[out_idx])
                if target is not None and tainted:
                    self.vars[target] = set(self.vars.get(target, set())) | tainted
        if not info.returns_taint:
            return set()
        out: set[TaintFact] = set()
        for facts in arg_facts:
            for fact in facts:
                if fact.source == PARAM_SOURCE:
                    continue
                out.add(fact.extend(f"{name}()"))
        return out

    # ---------------------------------------------------------------- 上报

    def _report(self, sink_api, node, facts, variant, line_override=None) -> None:
        if self.summary_mode:
            self._mark_param_sinks(facts)
            self.sink_lines.add(node.start_point[0] + 1)
            return
        line = line_override or node.start_point[0] + 1
        key = (self.info.file, line)
        if key in self.engine._seen:
            return
        real = [f for f in facts if f.source != PARAM_SOURCE]
        if not real:
            return
        self.engine._seen.add(key)
        fact = real[0]
        # 跨编译单元拼接（如 lib/strings.c:cmd_join3）优先归类 static_lib_hop
        if variant in ("concat_system", "popen_config") and \
                any("[cross-TU]" in hop for hop in fact.path):
            variant = "static_lib_hop"
        self.engine.findings.append(Finding(
            rule="command_injection",
            file=self.info.file,
            line=line,
            variant=variant,
            source=fact.source,
            entry=fact.entry,
            chain=fact.chain(),
            sink_api=sink_api,
            evidence=self.text(node).strip()[:200],
        ))

    def _string_value(self, node) -> str:
        if node is None:
            return ""
        if node.type == "string_literal":
            return self.text(node).strip('"')
        if node.type == "parenthesized_expression":
            return self._string_value(fchild(node, "expression"))
        return ""
