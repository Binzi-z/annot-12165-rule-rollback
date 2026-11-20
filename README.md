# 12165 — C/C++ 命令注入：跨编译单元污点分析 + SARIF

固件构建脚本和运行时都用 C/C++ 拼命令，去年一次事故里设备名带了个分号就直接执行了任意指令。
本仓库是重做分析器的语料与起点：**禁止套用现成规则集，只允许 tree-sitter-cpp 一类语法库自建符号表与调用图**。

## 语料构成

```
firmware/
  include/fw.h            公共结构体与函数声明（cfg_doc / pkt / tmpl_vars / cmd_entry）
  core/build_cmd.c        配置驱动的固件升级入口（7 条拼接 + 1 条跨编译单元）
  core/run_exec.c         exec 家族参数拼装（sh -c 的 argv/参数化误用）
  core/sensor_poll.c      BMC/PDU 轮询：config → popen
  core/shell_wrap.c       shell_run / cmd_run / tmpl_exec 共享包装 + 7 个调用点
  core/cmd_template.c     模板渲染出的命令行（配置/下行/环境变量三种来源）
  core/safecmd.c          良性调用（常量命令、固定 argv、白名单校验）
  net/dispatch.c          控制面分发：拼接 / RUN_SHELL 宏 / 跨编译单元
  net/ops.c               函数指针表派发（间接调用）
  net/probe.c             主动探测：下行字段 → popen
  net/downlink.cpp        C++ 侧 std::string 拼接 → std::system / popen
  net/proto_decode.c      TLV 下行包解码（污点入口）
  net/healthcheck.c       看门狗探针（全常量，良性）
  config/cfg_load.c       配置读取 + cmd_allowlist_ok 白名单（净化）
  lib/strings.c           cmd_join3 / cmd_trim（跨编译单元拼接）
  lib/static_pool.c       pool_exec_line 共享包装（实现行也是 system）
  lib/templating.c        {{var}} 模板渲染
  main.cpp                启动钩子：环境变量 → std::system
  cli/health.cpp          环境变量 → popen
  templates/*.sh.j2       5 个命令模板
  filler/                 300 个板级支撑模块（纯查表/校验，无执行原语）
config/sanitizers.json    可配置的 source / sanitizer / shell_wrapper / 模板白名单
```

合计 **319 个 C/C++ 文件、206,158 行**（`filler/` 就是题面里「20 万行全量 <3 分钟」的那片代码）。

## 标注（labels.json，50 条）

| variant | 条数 | 落点形态 |
|---|---:|---|
| `concat_system` | 15 | 拼接后 `system()` / `std::system()`（含 C++ `std::string` 拼接） |
| `popen_config` | 8 | 拼接后 `popen()`（C 与 C++ 两种） |
| `exec_arg_misuse` | 6 | `execv/execvp/execl/execlp` 但参数是 `sh -c` 的脚本文本 |
| `shell_wrapper` | 7 | 经 `shell_run` / `cmd_run` 共享包装进 `system()` |
| `template_rendered` | 5 | 模板渲染结果进 `system()` / `tmpl_exec` |
| `macro_indirection` | 3 | `RUN_SHELL(cmd)` 宏展开成 `system()` |
| `funcptr_dispatch` | 3 | `op_table[].fn(arg)` 间接调用后才到 `system()` |
| `static_lib_hop` | 3 | 经 `lib/strings.c:cmd_join3` 跨编译单元再执行 |

| source | 条数 |
|---|---:|
| 配置文件（`cfg_get_str`） | 20 |
| 网络下发指令（`pkt_str`） | 22 |
| 环境变量（`getenv`） | 8 |

每条标注带 `file`/`line`、`variant`、`source`、`entry`（污点入口）、`path`（传播路径）与 `evidence`。

**finding 的 `file`/`line` 指向污点实际到达的执行原语行**；共享包装（`shell_run` / `cmd_run` /
`pool_exec_line`）的实现行不算——那里没有「哪条链路」的信息，调用点才是可区分的落点。

## 良性注入点（报了就是误报）

- 常量命令：`system("sync")`、`popen("uptime", "r")`、`std::system("fwupdate --check")`
- 固定 argv 的参数化 exec：`execv("/bin/ls", argv)`、`execve("/usr/bin/cp", argv, environ)`
- 白名单校验后：`cfg_apply_net` / `cfg_apply_peer`（先过 `cmd_allowlist_ok` / 长度字符检查）
- 运行期包装实现：`shell_run` / `cmd_run` / `tmpl_exec` / `pool_exec_line` 内部的 `system()`
- `filler/`：300 个模块没有任何执行原语

`config/sanitizers.json` 里可以增删 source / sanitizer / shell_wrapper / 模板白名单（题目要求可配置）。

## 基线（baseline/scan.py）

正则扫「命令执行 API」，不看参数是否可控：`system` / `popen` / `exec*` /
`RUN_SHELL` / `shell_run` / `cmd_run` / `tmpl_exec` 出现即报。召回高、误报明显。

实测（扫描 firmware/ 206,158 行，约 0.5 秒）：

```
labels=50 findings=81 TP=50 FP=31 FN=0
recall=100.0% precision=61.7% false_positive_rate=38.3%
```

## 题面要求的效果指标（本仓库给出的起点）

- 50 条样本：召回 ≥85%、误报 ≤15%（基线 100% / 38.3%，要压下去只能靠真污点分析）
- 20 万行全量 <3 分钟、增量 <15 秒（本仓库 206k 行可直接压测）
- 结论走 SARIF 并接入 CI（`eval.py` 直接吃 SARIF 2.1.0）

## 跑法

```powershell
python baseline/scan.py | Out-File -Encoding utf8 o.json
python eval.py o.json
python -m pytest tests -q
```

## 评测口径（eval.py）

- 静态类标注（只有 file/line）：文件相同且行号差 ≤2。
- `needs_review` 不计分；一个标注只算命中一次，重复上报同一处算误报。
- rule 名称建议用 `command_injection`（`cmd_injection` / `CWE-78` 等别名也认）。
- 分析范围：`firmware/`（`baseline/`、`tools/`、`tests/`、`filler/` 不参与基线扫描）。

## 重造语料

```powershell
python tools/make_corpus.py     # 固定生成逻辑，重跑得到同一份代码与 labels.json
```
