"""CLI 入口：全量扫描与增量扫描。

用法
====
    python -m analyzer.cli scan --root firmware --config config/sanitizers.json \
        --sarif out.sarif --json out.json
    python -m analyzer.cli scan --root firmware --changed file1.c,file2.cpp \
        --cache .analyzer-cache.json --sarif inc.sarif

增量模式
========
缓存记录每个 TU 的函数摘要与文件 mtime。变更文件重新解析后，先重算受影响
TU 的摘要，再只对变更 TU 做函数内分析；跨 TU 的 sink 判定依赖全局摘要表，
因此摘要变更会反向触发依赖方重分析（依赖边在缓存里维护）。
"""
from __future__ import annotations

import argparse
import json
import os
import sys
import time

from .config import load_config
from .parser_index import discover_files, parse_file
from .sarif import to_findings_json, to_sarif
from .taint import TaintEngine


def _rel(root: str, path: str) -> str:
    """相对仓库根的路径：root 本身（如 firmware/）保留在 URI 里。"""
    rel = os.path.relpath(path, root).replace("\\", "/")
    root_prefix = root.replace("\\", "/").strip("/")
    return f"{root_prefix}/{rel}" if root_prefix else rel


def _strip_root_prefix(rel: str, root: str) -> str:
    root_prefix = root.replace("\\", "/").strip("/") + "/"
    return rel[len(root_prefix):] if root_prefix and rel.startswith(root_prefix) else rel


def run_full(root: str, config_path: str):
    cfg = load_config(config_path)
    paths = discover_files(root)
    files = {}
    t0 = time.perf_counter()
    for path in paths:
        pf = parse_file(_rel(root, path), path)
        files[pf.rel] = pf
    parse_ms = (time.perf_counter() - t0) * 1000
    t0 = time.perf_counter()
    engine = TaintEngine(files, cfg)
    findings = engine.run()
    analyze_ms = (time.perf_counter() - t0) * 1000
    stats = {
        "files": len(files),
        "functions": len(engine.funcs),
        "funcptr_tables": len(engine.tables),
        "macros": len(engine.macros),
        "parse_ms": round(parse_ms, 1),
        "analyze_ms": round(analyze_ms, 1),
        "total_ms": round(parse_ms + analyze_ms, 1),
        "findings": len(findings),
    }
    return findings, stats, engine


def run_incremental(root: str, config_path: str, changed: list[str],
                    cache_path: str):
    """增量扫描：changed 给出相对/绝对路径，未变更 TU 从缓存恢复摘要。"""
    cfg = load_config(config_path)
    cache = {"files": {}, "deps": {}}
    if os.path.exists(cache_path):
        with open(cache_path, "rb") as fh:
            cache = json.loads(fh.read().decode("utf-8"))

    changed_rels = set()
    root_prefix = root.replace("\\", "/").strip("/")
    for p in changed:
        # 目录入参（如 CI 给的 firmware/）：展开为其中全部源文件
        if os.path.isdir(p):
            for sub in discover_files(p):
                changed_rels.add(_rel(root, sub))
            continue
        if os.path.isabs(p):
            changed_rels.add(_rel(root, p))
        else:
            norm = p.replace("\\", "/")
            if root_prefix and not norm.startswith(root_prefix + "/"):
                norm = f"{root_prefix}/{norm}"
            changed_rels.add(norm)
    # 反向依赖：摘要可能变化的被调方 -> 需要重新分析的调用方
    affected = set(changed_rels)
    for rel in changed_rels:
        for caller in cache.get("deps", {}).get(rel, []):
            affected.add(caller)

    paths = discover_files(root)
    files = {}
    t0 = time.perf_counter()
    for path in paths:
        rel = _rel(root, path)
        if rel in affected or rel not in cache["files"]:
            files[rel] = parse_file(rel, path)
        else:
            # 未受影响 TU：只恢复函数摘要，不重新解析 AST
            files[rel] = _skeleton_from_cache(rel, path, cache["files"][rel])
    engine = TaintEngine(files, cfg)
    # 先用缓存摘要预填，再跑不动点（未变更 TU 会在首轮即收敛）
    for rel, entry in cache["files"].items():
        for name, summ in entry.get("summaries", {}).items():
            info = engine.funcs.get(name)
            if info is not None and rel not in affected:
                info.sink_params = set(summ["sink_params"])
                info.out_params = set(summ.get("out_params", []))
                info.returns_taint = summ["returns_taint"]
                info.sink_lines = list(summ["sink_lines"])
    findings = engine.run()
    ms = (time.perf_counter() - t0) * 1000

    # 合并全量视图：受影响 TU 用本轮新 finding，其余 TU 复用缓存里的历史 finding
    cached_findings = cache.get("findings", {})
    merged: list[dict] = []
    affected_or_new = affected | {f.file for f in findings}
    for rel, raw_list in cached_findings.items():
        if rel not in affected:
            merged.extend(raw_list)
    merged.extend(_finding_to_dict(f) for f in findings)
    merged.sort(key=lambda d: (d["file"], d["line"]))

    _write_cache(cache_path, root, engine, paths, all_findings=engine.findings)
    stats = {
        "files_total": len(paths),
        "files_reparsed": len(affected),
        "analyze_ms": round(ms, 1),
        "findings": len(merged),
        "mode": "incremental",
    }
    return [_dict_to_finding(d) for d in merged], stats, engine


def _finding_to_dict(f) -> dict:
    return {
        "rule": f.rule, "file": f.file, "line": f.line, "variant": f.variant,
        "source": f.source, "entry": f.entry, "chain": f.chain,
        "sink_api": f.sink_api, "evidence": f.evidence,
    }


def _dict_to_finding(d: dict):
    from .models import Finding
    return Finding(
        rule=d["rule"], file=d["file"], line=d["line"], variant=d["variant"],
        source=d["source"], entry=d["entry"], chain=d["chain"],
        sink_api=d["sink_api"], evidence=d["evidence"],
    )


def _skeleton_from_cache(rel, path, entry):
    """未变更 TU 的轻量占位：保留 mtime 信息，函数体不参与本轮分析。"""
    from .models import FunctionInfo, ParsedFile
    funcs = {}
    for name, summ in entry.get("summaries", {}).items():
        funcs[name] = FunctionInfo(
            name=name, qualname=name, file=rel,
            start_line=summ.get("start_line", 0), end_line=0,
            node=None, params=[], is_static=False,
            sink_params=set(summ["sink_params"]),
            out_params=set(summ.get("out_params", [])),
            returns_taint=summ["returns_taint"],
            sink_lines=list(summ["sink_lines"]),
        )
    return ParsedFile(
        rel=rel, abs_path=path, tree=None, source=b"",
        functions=funcs, calls=[], funcptr_tables=[], macros={},
        mtime=entry.get("mtime", 0.0),
    )


def _write_cache(cache_path, root, engine, paths, all_findings=None):
    rels = {_rel(root, p) for p in paths}
    by_file: dict[str, dict] = {}
    for name, info in engine.funcs.items():
        by_file.setdefault(info.file, {"mtime": 0.0, "summaries": {}})
        by_file[info.file]["summaries"][name] = {
            "sink_params": sorted(info.sink_params),
            "out_params": sorted(info.out_params),
            "returns_taint": info.returns_taint,
            "sink_lines": list(info.sink_lines),
            "start_line": info.start_line,
        }
    for rel in rels:
        by_file.setdefault(rel, {"mtime": 0.0, "summaries": {}})
        by_file[rel]["mtime"] = os.path.getmtime(
            os.path.join(root, _strip_root_prefix(rel, root)))
    deps: dict[str, set[str]] = {}
    for pf in engine.files.values():
        for callee, _line, _node in pf.calls:
            target = engine.funcs.get(callee)
            if target is not None and target.file != pf.rel:
                deps.setdefault(target.file, set()).add(pf.rel)
    findings_by_file: dict[str, list[dict]] = {}
    for f in (all_findings or []):
        findings_by_file.setdefault(f.file, []).append(_finding_to_dict(f))
    doc = {
        "files": by_file,
        "deps": {k: sorted(v) for k, v in deps.items()},
        "findings": findings_by_file,
    }
    with open(cache_path, "w", encoding="utf-8") as fh:
        json.dump(doc, fh, ensure_ascii=False)


def main(argv: list[str] | None = None) -> int:
    ap = argparse.ArgumentParser(description="C/C++ 命令注入污点分析器")
    sub = ap.add_subparsers(dest="cmd", required=True)
    sc = sub.add_parser("scan", help="扫描源码树")
    sc.add_argument("--root", default="firmware")
    sc.add_argument("--config", default="config/sanitizers.json")
    sc.add_argument("--sarif", help="SARIF 2.1.0 输出路径")
    sc.add_argument("--json", dest="json_out", help="findings.json 输出路径")
    sc.add_argument("--changed", default="", help="增量模式：逗号分隔的变更文件")
    sc.add_argument("--cache", default=".analyzer-cache.json")
    sc.add_argument("--stats", action="store_true", help=" stderr 打印性能统计")
    args = ap.parse_args(argv)

    if args.changed:
        changed = [p.strip() for p in args.changed.split(",") if p.strip()]
        findings, stats, _ = run_incremental(
            args.root, args.config, changed, args.cache)
    else:
        findings, stats, _ = run_full(args.root, args.config)

    if args.sarif:
        with open(args.sarif, "w", encoding="utf-8") as fh:
            json.dump(to_sarif(findings), fh, ensure_ascii=False, indent=1)
    if args.json_out:
        with open(args.json_out, "w", encoding="utf-8") as fh:
            json.dump(to_findings_json(findings), fh, ensure_ascii=False, indent=1)
    if not args.sarif and not args.json_out:
        json.dump(to_sarif(findings), sys.stdout, ensure_ascii=False, indent=1)
        sys.stdout.write("\n")
    if args.stats:
        print(json.dumps(stats, ensure_ascii=False), file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
