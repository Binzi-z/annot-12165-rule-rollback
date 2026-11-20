"""12165 自研命令注入静态分析器。

只依赖 tree-sitter / tree-sitter-cpp 两个语法库，符号表、调用图、
函数摘要与污点传播全部在本包内自建，不套用任何现成规则集。
"""

__all__ = ["analyze", "models", "config", "sarif"]
