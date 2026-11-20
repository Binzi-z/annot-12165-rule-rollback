"""数据模型：符号表条目、函数摘要、污点事实与 finding。"""
from __future__ import annotations

from dataclasses import dataclass, field


@dataclass(frozen=True)
class TaintFact:
    """一条污点事实。

    source   配置化 source 类别（config_file / network_downlink / env_var / param）
    entry    入口调用名，如 cfg_get_str / pkt_str / getenv；param 事实里存参数索引
    path     人类可读的传播链，用于 SARIF 证据
    """

    source: str
    entry: object
    path: tuple[str, ...] = ()

    def extend(self, hop: str) -> "TaintFact":
        return TaintFact(self.source, self.entry, self.path + (hop,))

    def chain(self) -> str:
        return " -> ".join([str(self.entry), *self.path])


@dataclass
class ParamInfo:
    name: str
    index: int


@dataclass
class FunctionInfo:
    name: str
    qualname: str            # 含命名空间的名字（C++ 用），C 里等于 name
    file: str
    start_line: int          # 1-based
    end_line: int
    node: object             # tree-sitter function_definition 节点
    params: list[ParamInfo]
    is_static: bool
    # 摘要：哪些参数索引的污点能未经净化到达命令执行 sink
    sink_params: set[int] = field(default_factory=set)
    # 摘要：哪些 out 参数索引会被带污点的入参写入（别名/输出语义）
    out_params: set[int] = field(default_factory=set)
    # 摘要：返回值是否带污点（source 或带污点参数透传）
    returns_taint: bool = False
    # 摘要里记录的 sink 行（参数污点情形），供间接调用复用
    sink_lines: list[int] = field(default_factory=list)


@dataclass
class TableEntry:
    """函数指针表中的一项：名字字面量 -> 处理函数名。"""

    name_literal: str
    handler: str
    line: int


@dataclass
class FuncPtrTable:
    var_name: str
    entry_type: str          # 表元素结构体名，如 cmd_entry
    entries: list[TableEntry] = field(default_factory=list)


@dataclass
class MacroDef:
    name: str
    body: str
    line: int


@dataclass
class ParsedFile:
    rel: str
    abs_path: str
    tree: object
    source: bytes
    functions: dict[str, FunctionInfo]
    calls: list[tuple[str, int, object]]   # (callee 名, 行, call 节点)
    funcptr_tables: list[FuncPtrTable]
    macros: dict[str, MacroDef]
    mtime: float


@dataclass
class Finding:
    rule: str
    file: str
    line: int
    variant: str
    source: str
    entry: str
    chain: str
    sink_api: str
    evidence: str
