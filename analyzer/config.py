"""读取 config/sanitizers.json，构造 source / sanitizer / wrapper 分类表。

分析器的「什么算 source、什么算净化、谁是 shell 包装」全部来自这份
可配置文件，而不是写死的规则集——增删条目即可做消融实验。
"""
from __future__ import annotations

import json
from dataclasses import dataclass, field

SHELL_SINKS = {"system", "popen"}
EXEC_SINKS = {
    "execl", "execlp", "execle", "execv", "execvp", "execvpe", "execve",
    "posix_spawn", "posix_spawnp",
}


@dataclass
class AnalyzerConfig:
    # source 函数名 -> source 类别
    sources: dict[str, str] = field(default_factory=dict)
    # 净化函数名 -> kind（whitelist / parameterized_exec）
    sanitizers: dict[str, str] = field(default_factory=dict)
    # 配置化 shell 包装（含宏名）
    shell_wrappers: set[str] = field(default_factory=set)
    template_dirs: list[str] = field(default_factory=list)
    safe_templates: set[str] = field(default_factory=set)

    @property
    def source_names(self) -> set[str]:
        return set(self.sources)

    @property
    def all_sink_apis(self) -> set[str]:
        return SHELL_SINKS | EXEC_SINKS


def load_config(path: str) -> AnalyzerConfig:
    with open(path, "rb") as fh:
        doc = json.loads(fh.read().decode("utf-8-sig"))
    cfg = AnalyzerConfig()
    for category, names in doc.get("sources", {}).items():
        for name in names:
            cfg.sources[name] = category
    for item in doc.get("sanitizers", []):
        cfg.sanitizers[item["name"]] = item.get("kind", "sanitizer")
    cfg.shell_wrappers = set(doc.get("shell_wrappers", []))
    cfg.template_dirs = list(doc.get("template_dirs", []))
    cfg.safe_templates = set(doc.get("safe_templates", []))
    return cfg
