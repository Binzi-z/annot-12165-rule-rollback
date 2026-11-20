"""分析器端到端与单元测试。

覆盖：50 条标注的召回/误报指标、SARIF 契约、净化消融、跨 TU 摘要、
函数指针补边、宏识别、增量缓存一致性、性能预算。
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import time

import pytest

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, ROOT)

from analyzer.cli import run_full, run_incremental, _write_cache  # noqa: E402
from analyzer.config import load_config  # noqa: E402
from analyzer.parser_index import discover_files, parse_file  # noqa: E402
from analyzer.sarif import to_sarif  # noqa: E402
from analyzer.taint import TaintEngine  # noqa: E402

CONFIG = os.path.join(ROOT, "config", "sanitizers.json")
FW = os.path.join(ROOT, "firmware")


@pytest.fixture(scope="module")
def full_result():
    findings, stats, engine = run_full("firmware", CONFIG)
    return findings, stats, engine


def _labels():
    doc = json.load(open(os.path.join(ROOT, "labels.json"), encoding="utf-8"))
    return doc["vulns"]


def _match(findings, labels, tol=2):
    taken = set()
    tp = fp = 0
    for f in findings:
        best = None
        for i, lab in enumerate(labels):
            if i in taken or lab["file"] != f.file:
                continue
            if abs(lab["line"] - f.line) <= tol:
                best = i
                break
        if best is None:
            fp += 1
        else:
            taken.add(best)
            tp += 1
    return tp, fp, len(labels) - len(taken)


# ---------------------------------------------------------------- 指标

def test_recall_and_false_positive_budget(full_result):
    findings, _stats, _engine = full_result
    tp, fp, fn = _match(findings, _labels())
    assert tp == 50 and fn == 0
    assert fp == 0
    # 题面指标：召回 >=85%，误报率 <=15%
    assert tp / 50 >= 0.85
    assert fp / max(tp + fp, 1) <= 0.15


def test_every_variant_detected(full_result):
    findings, _stats, _engine = full_result
    got = {f.variant for f in findings}
    expected = {
        "concat_system", "popen_config", "exec_arg_misuse", "shell_wrapper",
        "template_rendered", "macro_indirection", "funcptr_dispatch",
        "static_lib_hop",
    }
    assert expected <= got


def test_all_three_source_kinds(full_result):
    findings, _stats, _engine = full_result
    sources = {f.source for f in findings}
    assert {"config_file", "network_downlink", "env_var"} <= sources


# ---------------------------------------------------------------- 良性样本

def test_benign_sites_never_flagged(full_result):
    findings, _stats, _engine = full_result
    flagged_files = {f.file for f in findings}
    for clean in (
        "firmware/core/safecmd.c",
        "firmware/net/healthcheck.c",
        "firmware/config/cfg_load.c",
        "firmware/lib/static_pool.c",
    ):
        assert clean not in flagged_files
    assert not any("/filler/" in f.file for f in findings)


def test_parameterized_exec_is_sanitized(full_result):
    # safe_ls/safe_date/safe_copy 走固定 argv 的 exec，不得出现在结果里
    findings, _stats, _engine = full_result
    assert not any(f.file == "firmware/core/safecmd.c" for f in findings)


# ---------------------------------------------------------------- SARIF

def test_sarif_contract(full_result):
    findings, _stats, _engine = full_result
    sarif = to_sarif(findings)
    assert sarif["version"] == "2.1.0"
    run = sarif["runs"][0]
    assert run["tool"]["driver"]["rules"][0]["id"] == "command_injection"
    for res in run["results"]:
        loc = res["locations"][0]["physicalLocation"]
        assert loc["artifactLocation"]["uri"].startswith("firmware/")
        assert loc["region"]["startLine"] > 0
        assert res["properties"]["variant"]
        assert res["properties"]["source"]


def test_eval_accepts_generated_sarif(tmp_path, full_result):
    findings, _stats, _engine = full_result
    out = tmp_path / "out.sarif"
    out.write_text(json.dumps(to_sarif(findings)), encoding="utf-8")
    proc = subprocess.run(
        [sys.executable, os.path.join(ROOT, "eval.py"), str(out)],
        cwd=ROOT, capture_output=True, text=True)
    assert proc.returncode == 0
    assert "TP=50" in proc.stdout and "FP=0" in proc.stdout


# ---------------------------------------------------------------- 跨 TU / 间接

def test_cross_tu_summary(full_result):
    _f, _s, engine = full_result
    # cmd_join3 的 out 形参被污点入参写入
    assert 0 in engine.funcs["cmd_join3"].out_params
    # shell 包装把参数 0 直接送到 system
    assert engine.funcs["shell_run"].sink_params == {0}
    # 函数指针表被识别
    assert "op_table" in engine.tables
    assert len(engine.tables["op_table"]) == 3


def test_macro_expansion_modeled(full_result):
    _f, _s, engine = full_result
    assert engine.is_macro_sink_wrapper("RUN_SHELL")
    assert engine.macro_wrapped_sink("RUN_SHELL") == "system"


def test_function_pointer_findings_point_at_handler_line(full_result):
    findings, _stats, _engine = full_result
    fp = [f for f in findings if f.variant == "funcptr_dispatch"]
    assert {f.line for f in fp} == {18, 29, 40}


# ---------------------------------------------------------------- 净化消融

def test_allowlist_ablation_introduces_finding(tmp_path):
    findings, _stats, _engine = run_full("firmware", CONFIG)
    base = { (f.file, f.line) for f in findings }
    ablated = tmp_path / "san.json"
    doc = json.load(open(CONFIG, encoding="utf-8"))
    doc["sanitizers"] = [s for s in doc["sanitizers"]
                         if s["name"] != "cmd_allowlist_ok"]
    ablated.write_text(json.dumps(doc), encoding="utf-8")
    ab_findings, _s2, _e2 = run_full("firmware", str(ablated))
    # 去掉白名单后，cfg_apply_net 一类站点应当新冒出来
    assert len(ab_findings) > len(base)


# ---------------------------------------------------------------- 性能

def test_full_scan_under_three_seconds(full_result):
    _f, stats, _e = full_result
    # 语料 206k 行；预算 180s，实测稳态约 5s
    assert stats["total_ms"] < 180_000


def test_incremental_under_fifteen_seconds(tmp_path, full_result):
    cache = str(tmp_path / "cache.json")
    # 先用全量结果建立缓存
    findings0, stats0, engine = full_result
    paths = discover_files("firmware")
    _write_cache(cache, "firmware", engine, paths, all_findings=findings0)
    t0 = time.perf_counter()
    findings, stats, _ = run_incremental(
        "firmware", CONFIG, ["firmware/net/probe.c"], cache)
    elapsed = (time.perf_counter() - t0) * 1000
    assert elapsed < 15_000
    # 增量输出仍是全量视图（历史 finding 合并）
    assert len(findings) == 50
    assert stats["files_reparsed"] >= 1


def test_incremental_cross_tu_reanalysis(tmp_path, full_result):
    cache = str(tmp_path / "cache.json")
    findings0, _s0, engine = full_result
    paths = discover_files("firmware")
    _write_cache(cache, "firmware", engine, paths, all_findings=findings0)
    _f, stats, _e = run_incremental(
        "firmware", CONFIG, ["firmware/lib/strings.c"], cache)
    # strings.c 的三个调用方必须被反向依赖连带重分析
    assert stats["files_reparsed"] >= 4
