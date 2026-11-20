#!/usr/bin/env python3
"""baseline/scan.py —— 12165 的现有基线：正则扫「命令执行 API」。

现状就是题面第一句说的那件事：只看调用点，不看参数是不是用户可控的。
只要一行里出现 system / popen / exec 家族 / 项目里的 shell 包装
（shell_run / cmd_run / tmpl_exec / RUN_SHELL）就报。于是常量命令、
固定的 argv、过了 cmd_allowlist_ok 白名单的调用全被报成漏洞（误报），
而真正跨编译单元、经函数指针/模板传播的链路也只是「报在调用行」，
没有任何污点证据。

用法::

    python baseline/scan.py > findings.json
    python eval.py findings.json

只依赖标准库；扫描 firmware/（baseline/、tools/、tests/、filler/ 不参与）。
"""
from __future__ import annotations

import json
import os
import re
import sys

SCAN_ROOT = "firmware"
SKIP_DIRS = {"__pycache__", ".git", "baseline", "tools", "tests", "filler"}

SINK = re.compile(
    r"\b(?:"
    r"system|popen"
    r"|execl|execlp|execle|execv|execvp|execvpe|execve|posix_spawn"
    r"|RUN_SHELL|shell_run|cmd_run|tmpl_exec"
    r")\s*\("
)


def scan_file(rel: str) -> list[dict]:
    out = []
    with open(rel, encoding="utf-8", errors="ignore") as fh:
        for no, line in enumerate(fh, start=1):
            stripped = line.strip()
            if stripped.startswith("//") or stripped.startswith("*"):
                continue
            if SINK.search(line):
                out.append({
                    "rule": "command_injection",
                    "sink": "command_injection",
                    "file": rel.replace("\\", "/"),
                    "line": no,
                    "evidence": stripped[:200],
                })
    return out


def main() -> int:
    findings: list[dict] = []
    for dirpath, dirnames, names in os.walk(SCAN_ROOT):
        dirnames[:] = sorted(d for d in dirnames if d not in SKIP_DIRS)
        for name in sorted(names):
            if name.endswith((".c", ".cpp", ".cc", ".h")):
                findings.extend(scan_file(os.path.join(dirpath, name)))
    json.dump({"findings": findings}, sys.stdout, ensure_ascii=False, indent=1)
    sys.stdout.write("\n")
    print(f"[baseline] {len(findings)} sink hits (regex on execution APIs, no taint)",
          file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
