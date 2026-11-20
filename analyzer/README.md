# 命令注入静态分析器（analyzer/）

只依赖 `tree-sitter` / `tree-sitter-cpp` 两个**语法**库。符号表、调用图、
函数摘要、污点传播、函数指针补边、宏识别全部在本包内自建，不套用任何现成
规则集（CodeQL / Semgrep 规则 / Clang Static Analyzer check 均未使用）。

## 架构

```
analyzer/
  models.py        数据模型：TaintFact / FunctionInfo / FuncPtrTable / Finding
  config.py        读 config/sanitizers.json，构造 source/净化/wrapper 分类表
  parser_index.py  解析层：tree-sitter AST -> 函数/调用边/函数指针表/宏表
  taint.py         分析层：函数内污点传播 + 函数摘要不动点 + 跨 TU 传播
  sarif.py         SARIF 2.1.0 与 findings.json 输出
  cli.py           全量 / 增量扫描入口、摘要缓存
```

### 两阶段分析

1. **解析（parser_index.py）**：每个 TU 建 AST，抽取
   - 函数定义、形参、`static` 性质；
   - 全部调用边（`callee_name` 归一化 `std::system`→`system`）；
   - 函数指针表初始化器 `{ "name", handler }`，补出语法调用图看不到的边；
   - 函数式宏定义（`#define RUN_SHELL(c) system(c)`）。
2. **污点分析（taint.py）**：
   - **函数内**：变量名 → `TaintFact` 集合，按语法顺序遍历语句；表达式后序
     求值，覆盖 `snprintf`/`strcpy`/`memcpy`/`cmd_join3` 等 out 传播、
     `std::string operator+`、`c_str()`、数组 `argv[i]=`、三元/转型/括号。
   - **函数间**：每个函数算摘要——`sink_params`（哪些形参能到 sink）、
     `out_params`（哪些 out 形参被污点入参写入）、`returns_taint`、
     `sink_lines`。跨编译单元按调用边迭代到不动点，静态库函数（lib/strings.c）
     与本 TU 函数走同一条摘要路径，并在污点事实上打 `[cross-TU]` 标记。

### Source / sink / 净化（全部来自 sanitizers.json，可消融）

- **source**：`cfg_get_str`/`cfg_get_int`（配置）、`pkt_str`/`pkt_decode`（下行）、
  `getenv`/`secure_getenv`（环境变量）。
- **sink**：`system`/`popen`（含 `std::`）、exec 家族、配置化 shell 包装
  （`shell_run`/`cmd_run`/`tmpl_exec`）、宏包装（`RUN_SHELL`）。
- **净化**：
  - *白名单/长度/字符/前缀守卫*：识别 `if (x==NULL || !cmd_allowlist_ok(x)) return`
    这类早退守卫，以及 `strchr(x,';')`/`strlen`/`strncmp` 条件，命中后变量转 clean；
  - *参数化 exec*：`execv(path, argv)` 且 argv 不经 `sh -c` 算净化；只有
    `execl(..., "sh","-c",script,...)` 或 `execv("/bin/sh", argv)` 且数组
    `argv[0]` 被赋成 shell 字面量时，才按 `exec_arg_misuse` 报；
  - *安全模板*：`tmpl_exec("rotate.sh.j2", ...)` 命中 `safe_templates` 即良性。

## 用法

```bash
# 全量（输出 SARIF + findings.json，stderr 打性能统计）
python -m analyzer.cli scan --root firmware --config config/sanitizers.json \
    --sarif out.sarif --json out.json --stats

# 评测
python eval.py out.sarif

# 增量（--changed 接文件或目录，可逗号分隔；缓存记录摘要、反向依赖、历史 finding）
python -m analyzer.cli scan --root firmware --config config/sanitizers.json \
    --changed firmware/net/probe.c --cache .analyzer-cache.json --sarif inc.sarif
```

增量输出仍是**全量视图**：变更 TU 用本轮新 finding，未受影响 TU 合并缓存里的
历史 finding。改被调方时，缓存的反向依赖边会把调用方 TU 连带重分析。

## 实测指标（本仓库 206,158 行 / 319 文件 / 11,187 函数）

| 指标 | 要求 | 实测 |
|---|---|---|
| 召回（50 标注） | ≥85% | **100%（50/50）** |
| 误报率 | ≤15% | **0%（0 FP）** |
| 全量耗时 | <180s | **~5s**（解析 ~3s + 分析 ~1.8s） |
| 增量耗时 | <15s | **0.06–0.1s**（单文件，热缓存） |

消融实验：从 `sanitizers.json` 删掉 `cmd_allowlist_ok` 后白名单站点立即变成
误报；删掉 `shell_wrappers` 后 7 条包装链路漏报——证明净化/包装识别真实生效。

## 宏与函数指针导致调用图失真时，爆炸半径怎么控

C 的预处理宏和函数指针让「名字 → 目标函数」的静态边不完整，朴素跨过程分析
要么漏边（漏报），要么对未知目标做全域连接（爆炸）。本分析器用四条策略把
跨过程传播的爆炸半径压在可控范围：

1. **摘要而非全域路径枚举**。跨过程不传完整路径，只传每个函数的三元摘要
   （sink/out 形参索引、返回值是否带污点、sink 行）。不动点迭代的状态空间是
   `函数数 × 形参数`，与调用深度、路径数无关，天然截断指数级路径爆炸。
2. **宏按定义体归一，不做文本展开**。`RUN_SHELL(c)` 被解析成
   `preproc_function_def`，只记录「宏名 → 展开体里的 sink 短名（system）」，
   调用点按普通 sink 处理。避免对每个调用点做预处理展开导致的 AST 膨胀。
3. **函数指针只在表内补边，不做全域指向分析**。语法调用图在
   `op_table[i].fn(arg)` 处断掉；解析层从初始化器里显式读出
   `{字面量, handler}` 边，间接调用只连接到**同一张表的有限几个 handler**
   （本表 3 个），而不是连到所有签名匹配的函数。表通常很小，单条间接边的
   扇出被限制在表项数量级。
4. **入口边界显式收口 + 深度/不动点上限**。对 `ops_dispatch` 这类公开
   （非 static）分发器，其形参视为外部可达入口（`entry_param` 事实），在
   分发边界处收口，不向调用栈上方无限回溯；摘要迭代设 12 轮上限，循环体
   定宽分析一次。未知外部函数不臆造污点也不清除污点（保守但不扩散）。

配合增量缓存的反向依赖边：一个被调方摘要变化时，只重分析依赖它的调用方 TU，
爆炸半径进一步限制在实际依赖闭包内，而不是全量重扫。
