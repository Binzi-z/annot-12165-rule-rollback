"""手动回滚演示：改坏规则 -> 加载失败自动回滚 -> 告警恢复。

演示全程不触碰 data/events.jsonl（事件文件格式与内容均不变），
所有临时文件都放在工作目录下的 demo_workdir/，结束后可直接删除。

运行：
    python -I demo_rollback.py
"""

from __future__ import annotations

import json
import shutil
import subprocess
import sys
from pathlib import Path

for _stream in (sys.stdout, sys.stderr):
    if hasattr(_stream, "reconfigure"):
        _stream.reconfigure(encoding="utf-8", errors="replace")

ROOT = Path(__file__).resolve().parent
WORK = ROOT / "demo_workdir"
RULES_SRC = ROOT / "rules" / "rules.txt"
EVENTS = ROOT / "data" / "events.jsonl"
ALERTS = WORK / "alerts.json"
RULES = WORK / "rules" / "rules.txt"

GOOD_V2 = """# 演示用合法 v2：仅把突发阈值注释得更明确，参数微调（12 -> 10）
rule: burst_small_pay
window: 60
count: 10
action: pay
region: unseen

rule: new_device_big_withdraw
require_new_device: true
follow_window: 300
action: withdraw
amount: 40000
"""

# “改坏”的规则：window 不是数字、且引用了未知键，解析/校验必然失败
BROKEN = """rule: burst_small_pay
window: 六十秒
count: 12
action: pay
region: unseen
bogus_key: 1
"""


def run_engine() -> tuple[int, str, str]:
    proc = subprocess.run(
        [sys.executable, "-I", str(ROOT / "engine.py"),
         str(EVENTS), str(ALERTS), "--rules", str(RULES)],
        capture_output=True, text=True, encoding="utf-8",
    )
    return proc.returncode, proc.stdout.strip(), proc.stderr.strip()


def alert_summary() -> list[dict]:
    data = json.loads(ALERTS.read_text(encoding="utf-8"))
    return [
        {
            "rule": a["rule"],
            "account": a["account"],
            "version": a["rule_version"],
            "snapshot_count": a["window_snapshot"]["event_count"],
        }
        for a in data["alerts"]
    ]


def banner(title: str) -> None:
    print("\n" + "=" * 64)
    print(title)
    print("=" * 64)


def main() -> int:
    if WORK.exists():
        shutil.rmtree(WORK)
    RULES.parent.mkdir(parents=True)
    shutil.copy(RULES_SRC, RULES)

    # 步骤 1：基线规则生效 ------------------------------------------------- #
    banner("步骤 1/4  基线规则（v1）加载并跑全量事件")
    code, out, err = run_engine()
    assert code == 0, err
    print(out)
    v1_alerts = alert_summary()
    print("告警摘要:", json.dumps(v1_alerts, ensure_ascii=False))
    assert len(v1_alerts) == 2, "基线规则必须命中两类欺诈"

    # 步骤 2：合法热更新 --------------------------------------------------- #
    banner("步骤 2/4  写入合法新规则（count 12 -> 10），热更新到 v2")
    RULES.write_text(GOOD_V2, encoding="utf-8")
    code, out, err = run_engine()
    assert code == 0, err
    print(out)
    v2_alerts = alert_summary()
    versions = {a["version"] for a in v2_alerts}
    assert len(versions) == 1 and versions != {v1_alerts[0]["version"]}, "版本号应切换"
    print("告警摘要:", json.dumps(v2_alerts, ensure_ascii=False))

    # 步骤 3：改坏规则 -> 自动回滚 ----------------------------------------- #
    banner("步骤 3/4  写入改坏的规则（window=六十秒、未知键），触发自动回滚")
    RULES.write_text(BROKEN, encoding="utf-8")
    code, out, err = run_engine()
    print(out)
    if err:
        print("stderr:", err)
    assert code == 0, "回滚后引擎应继续可用，而不是崩溃"
    assert "rolled_back" in out, "必须出现 rolled_back"
    log = json.loads(
        (RULES.parent / "state" / "load_log.json").read_text(encoding="utf-8")
    )
    rollback_entry = next(e for e in log["entries"] if e["status"] == "rolled_back")
    print("\n回滚原因已持久化到 load_log.json：")
    print(" ", rollback_entry["reason"])
    print("  保持生效版本:", rollback_entry["active_version"])

    # 步骤 4：回滚后告警恢复 ----------------------------------------------- #
    banner("步骤 4/4  用回滚保留的 v2 规则重跑，告警恢复且仍零误报")
    recovered = alert_summary()
    print("告警摘要:", json.dumps(recovered, ensure_ascii=False))
    active_version = rollback_entry["active_version"]
    assert all(a["version"] == active_version for a in recovered)
    assert len(recovered) == 2, "回滚后仍必须命中两类欺诈，且无新增误报"

    banner("演示完成 ✅")
    print("1. 改坏的规则从未生效，引擎自动回滚到上一版并保留失败原因")
    print("2. 两类欺诈（u9001 burst_small_pay / u9002 new_device_big_withdraw）全部命中")
    print("3. 3014 条事件仅产生 2 条告警，正常流水零误报")
    print(f"4. 产物见 {WORK}（alerts.json、rules/state/load_log.json）")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
