"""SARIF 2.1.0 输出。

eval.py 直接吃 runs[].results[].ruleId + physicalLocation.uri/startLine；
额外把污点链路 / source 类别 / variant 放进 result.properties，供 CI 展示。
"""
from __future__ import annotations

from .models import Finding

RULE_ID = "command_injection"
RULE_INDEX = 0


def to_sarif(findings: list[Finding], root_name: str = "fw-cmd-injection-analyzer") -> dict:
    results = []
    for f in findings:
        results.append({
            "ruleId": RULE_ID,
            "ruleIndex": RULE_INDEX,
            "level": "error",
            "message": {
                "text": (f"[{f.variant}] 不可信数据({f.source}: {f.entry}) "
                         f"经 {f.chain or f.entry} 到达 {f.sink_api}()"),
            },
            "locations": [{
                "physicalLocation": {
                    "artifactLocation": {
                        "uri": f.file.replace("\\", "/"),
                        "uriBaseId": "%SRCROOT%",
                    },
                    "region": {"startLine": f.line},
                },
            }],
            "properties": {
                "variant": f.variant,
                "source": f.source,
                "taint_entry": f.entry,
                "taint_path": f.chain,
                "sink_api": f.sink_api,
                "evidence": f.evidence,
                "cwe": "CWE-78",
            },
        })
    return {
        "$schema": "https://json.schemastore.org/sarif-2.1.0.json",
        "version": "2.1.0",
        "runs": [{
            "tool": {
                "driver": {
                    "name": root_name,
                    "version": "1.0.0",
                    "informationUri": "https://example.invalid/fw-analyzer",
                    "rules": [{
                        "id": RULE_ID,
                        "name": "CommandInjection",
                        "shortDescription": {
                            "text": "OS 命令注入：不可信数据到达 shell 执行原语",
                        },
                        "fullDescription": {
                            "text": (
                                "配置文件 / 网络下发 / 环境变量数据未经白名单或参数化"
                                "处理，经拼接、shell 包装、模板渲染或函数指针派发到达 "
                                "system/popen/sh -c exec。CWE-78。"
                            ),
                        },
                        "defaultConfiguration": {"level": "error"},
                        "helpUri": "https://cwe.mitre.org/data/definitions/78.html",
                    }],
                },
            },
            "results": results,
        }],
    }


def to_findings_json(findings: list[Finding]) -> dict:
    return {
        "findings": [{
            "rule": f.rule,
            "file": f.file.replace("\\", "/"),
            "line": f.line,
            "variant": f.variant,
            "source": f.source,
            "entry": f.entry,
            "path": f.chain,
            "sink": f.sink_api,
            "evidence": f.evidence,
        } for f in findings],
    }
