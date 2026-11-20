"""解析层：tree-sitter-cpp 建 AST，自建符号表 / 调用边 / 函数指针表 / 宏表。

不做任何污点判断，只产出 ParsedFile 索引；分析层在此之上工作。
"""
from __future__ import annotations

import os

import tree_sitter_cpp as tscpp
from tree_sitter import Language, Parser

from .models import FuncPtrTable, FunctionInfo, MacroDef, ParamInfo, ParsedFile, TableEntry

LANGUAGE = Language(tscpp.language())
_PARSER = Parser(LANGUAGE)

SOURCE_EXTS = (".c", ".cc", ".cpp", ".cxx", ".h", ".hpp", ".hh")


# ---------------------------------------------------------------- AST 工具

def node_text(node, source: bytes) -> str:
    if node is None:
        return ""
    return source[node.start_byte:node.end_byte].decode("utf-8", errors="replace")


def child(node, *types: str):
    """按节点类型取第一个直接子节点；tree-sitter-cpp 部分版本不写字段名。"""
    if node is None:
        return None
    for sub in node.children:
        if sub.type in types:
            return sub
    return None


def fchild(node, field: str, *types: str):
    """先查字段名，缺失时按类型回退。"""
    if node is None:
        return None
    got = node.child_by_field_name(field)
    if got is not None:
        return got
    return child(node, *types) if types else None


def callee_name(call_node, source: bytes) -> str:
    """调用表达式的被调方「短名」：std::system -> system，cmd.c_str -> c_str。"""
    fn = call_node.child_by_field_name("function")
    if fn is None:
        # 该 grammar 不写 function 字段：argument_list 之前的那个子节点即被调方
        args = call_node.child_by_field_name("arguments")
        if args is None:
            args = child(call_node, "argument_list")
        for sub in call_node.children:
            if sub is args:
                break
            if sub.type not in ("(", ")", ","):
                fn = sub
    if fn is None:
        return ""
    if fn.type == "identifier":
        return node_text(fn, source)
    if fn.type == "qualified_identifier":
        # std::system / ::system：取最后一个 identifier
        last = None
        for child in fn.children:
            if child.type in ("identifier", "type_identifier"):
                last = child
        return node_text(last, source) if last is not None else node_text(fn, source)
    if fn.type == "field_expression":
        ident = fn.child_by_field_name("field")
        return node_text(ident, source) if ident is not None else node_text(fn, source)
    # 函数指针间接调用 op_table[i].fn(...) 等：整体文本留给上层判断
    return node_text(fn, source)


def iter_children_of_type(node, wanted: str):
    for child in node.children:
        if child.type == wanted:
            yield child


def _declarator_identifier(declarator) -> object | None:
    """从任意 declarator 里挖出最内层 identifier 节点。"""
    if declarator is None:
        return None
    if declarator.type in ("identifier", "field_identifier", "type_identifier"):
        return declarator
    name = declarator.child_by_field_name("declarator")
    if name is not None:
        return _declarator_identifier(name)
    for child in declarator.children:
        if child.type in ("function_declarator", "pointer_declarator",
                          "array_declarator", "reference_declarator",
                          "init_declarator"):
            found = _declarator_identifier(child)
            if found is not None:
                return found
    return None


def _function_params(fd_node, source: bytes) -> list[ParamInfo]:
    fdecl = None
    for child in fd_node.children:
        if child.type == "function_declarator":
            fdecl = child
            break
    if fdecl is None:
        # C++ 引用/指针返回值等形态：declarator 字段本身可能是 function_declarator
        fdecl = fd_node.child_by_field_name("declarator")
        while fdecl is not None and fdecl.type != "function_declarator":
            fdecl = fdecl.child_by_field_name("declarator")
    if fdecl is None:
        return []
    plist = fdecl.child_by_field_name("parameters")
    if plist is None:
        for child in fdecl.children:
            if child.type == "parameter_list":
                plist = child
                break
    out: list[ParamInfo] = []
    if plist is None:
        return out
    idx = 0
    for pdecl in plist.children:
        if pdecl.type != "parameter_declaration":
            continue
        ident = _declarator_identifier(pdecl.child_by_field_name("declarator"))
        name = node_text(ident, source) if ident is not None else f"__arg{idx}"
        out.append(ParamInfo(name=name, index=idx))
        idx += 1
    return out


def _is_storage_static(fd_node) -> bool:
    for child in fd_node.children:
        if child.type == "storage_class_specifier" and node_text(child, b"static") == "static":
            return True
    return False


def _collect_calls(node, out: list, source: bytes) -> None:
    if node.type == "call_expression":
        line = node.start_point[0] + 1
        out.append((callee_name(node, source), line, node))
    for child in node.children:
        _collect_calls(child, out, source)


# ---------------------------------------------------------------- 宏

def _collect_macros(root, source: bytes) -> dict[str, MacroDef]:
    macros: dict[str, MacroDef] = {}
    for child in root.children:
        if child.type != "preproc_function_def":
            continue
        ident = None
        body = ""
        for sub in child.children:
            if sub.type == "identifier" and ident is None:
                ident = sub
            elif sub.type == "preproc_arg":
                body = node_text(sub, source).strip()
        if ident is not None:
            name = node_text(ident, source)
            macros[name] = MacroDef(name=name, body=body,
                                    line=child.start_point[0] + 1)
    return macros


# ------------------------------------------------------------ 函数指针表

def _extract_funcptr_tables(root, source: bytes) -> list[FuncPtrTable]:
    """识别 `static const struct cmd_entry op_table[] = { {"a", f}, ... }`。

    语法调用图在 op_table[i].fn(arg) 处断掉；这里把初始化器里的
    「字符串字面量 -> 函数名」边显式建出来，供分析层补边。
    """
    tables: list[FuncPtrTable] = []
    for decl in _walk_declarations(root):
        init_list, var_name, struct_name = _table_shape(decl, source)
        if init_list is None:
            continue
        table = FuncPtrTable(var_name=var_name, entry_type=struct_name)
        for row in init_list.children:
            if row.type != "initializer_list":
                continue
            literal = handler = None
            for sub in row.children:
                if sub.type == "string_literal":
                    literal = node_text(sub, source).strip('"')
                elif sub.type == "identifier":
                    handler = node_text(sub, source)
            if literal is not None and handler is not None:
                table.entries.append(TableEntry(
                    name_literal=literal, handler=handler,
                    line=row.start_point[0] + 1))
        if table.entries:
            tables.append(table)
    return tables


def _walk_declarations(root):
    stack = [root]
    while stack:
        node = stack.pop()
        if node.type == "declaration":
            yield node
        stack.extend(node.children)


def _table_shape(decl, source: bytes):
    """判断一个 declaration 是否为「结构体数组 = 初始化器列表」，返回三元组。"""
    struct_name = ""
    for child in decl.children:
        if child.type == "struct_specifier":
            ti = None
            for sub in child.children:
                if sub.type == "type_identifier":
                    ti = sub
            struct_name = node_text(ti, source) if ti is not None else ""
    init_decl = None
    for child in decl.children:
        if child.type == "init_declarator":
            init_decl = child
            break
    if init_decl is None:
        return None, "", ""
    var_ident = _declarator_identifier(init_decl.child_by_field_name("declarator"))
    var_name = node_text(var_ident, source) if var_ident is not None else ""
    value = init_decl.child_by_field_name("value")
    if value is None or value.type != "initializer_list":
        return None, var_name, struct_name
    return value, var_name, struct_name


# ---------------------------------------------------------------- 单文件解析

def parse_file(rel: str, abs_path: str) -> ParsedFile:
    with open(abs_path, "rb") as fh:
        source = fh.read()
    tree = _PARSER.parse(source)
    root = tree.root_node
    macros = _collect_macros(root, source)
    tables = _extract_funcptr_tables(root, source)

    functions: dict[str, FunctionInfo] = {}
    calls: list[tuple[str, int, object]] = []
    for fd in _top_level_functions(root):
        name_node = _function_name(fd, source)
        if name_node is None:
            continue
        name = node_text(name_node, source)
        params = _function_params(fd, source)
        body = fd.child_by_field_name("body")
        info = FunctionInfo(
            name=name,
            qualname=name,
            file=rel,
            start_line=fd.start_point[0] + 1,
            end_line=fd.end_point[0] + 1,
            node=fd,
            params=params,
            is_static=_is_storage_static(fd),
        )
        # 同名 static 函数在不同 TU 可重复；本语料内无同名冲突，按名索引即可
        functions[name] = info
        if body is not None:
            file_calls: list = []
            _collect_calls(body, file_calls, source)
            calls.extend(file_calls)

    return ParsedFile(
        rel=rel, abs_path=abs_path, tree=tree, source=source,
        functions=functions, calls=calls, funcptr_tables=tables,
        macros=macros, mtime=os.path.getmtime(abs_path),
    )


def _top_level_functions(root):
    for child in root.children:
        if child.type == "function_definition":
            yield child


def _function_name(fd_node, source: bytes):
    declarator = fd_node.child_by_field_name("declarator")
    ident = _declarator_identifier(declarator)
    return ident


def discover_files(root_dir: str) -> list[str]:
    out: list[str] = []
    for dirpath, dirnames, names in os.walk(root_dir):
        dirnames[:] = sorted(d for d in dirnames if d not in {".git", "__pycache__"})
        for name in sorted(names):
            if name.endswith(SOURCE_EXTS):
                out.append(os.path.join(dirpath, name))
    return out
