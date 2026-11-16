import json
import os
import subprocess
import sys
import time
from pathlib import Path

import pytest

ROOT = Path(__file__).resolve().parent.parent
ENGINE = ROOT / "engine.py"
EVENTS = ROOT / "data" / "events.jsonl"
LABELS = ROOT / "labels.json"
RULES_SRC = ROOT / "rules" / "rules.txt"

sys.path.insert(0, str(ROOT))
import engine as eng  # noqa: E402


# --------------------------------------------------------------------------- #
# helpers
# --------------------------------------------------------------------------- #

def run_cli(tmp_path, rules_path=None, watch=False, max_cycles=None):
    out = tmp_path / "alerts.json"
    cmd = [sys.executable, "-I", str(ENGINE), str(EVENTS), str(out)]
    if rules_path:
        cmd += ["--rules", str(rules_path)]
    if watch:
        cmd += ["--watch", "--interval", "0.1"]
        if max_cycles:
            cmd += ["--max-cycles", str(max_cycles)]
    proc = subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", timeout=60)
    return proc, out


def load_alerts(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))


@pytest.fixture()
def rule_store(tmp_path):
    rules = tmp_path / "rules.txt"
    rules.write_text(RULES_SRC.read_text(encoding="utf-8"), encoding="utf-8")
    return eng.RuleStore(rules)


# --------------------------------------------------------------------------- #
# baseline contract (original skeleton tests, kept)
# --------------------------------------------------------------------------- #

def test_events_present():
    with open(EVENTS, encoding="utf-8") as fh:
        n = sum(1 for _ in fh)
    assert n > 1000


def test_labels_present():
    labels = json.loads(LABELS.read_text(encoding="utf-8"))
    assert len(labels["fraud"]) >= 2


def test_engine_runs(tmp_path):
    r, out = run_cli(tmp_path)
    assert r.returncode == 0, r.stderr
    assert "alerts" in load_alerts(out)


def test_alerts_have_account(tmp_path):
    _, out = run_cli(tmp_path)
    for a in load_alerts(out)["alerts"]:
        assert a.get("account")


# --------------------------------------------------------------------------- #
# requirement ②: zero false positives, both frauds hit
# --------------------------------------------------------------------------- #

def test_exactly_two_alerts_matching_labels(tmp_path):
    _, out = run_cli(tmp_path)
    data = load_alerts(out)
    labels = json.loads(LABELS.read_text(encoding="utf-8"))["fraud"]

    assert data["alert_count"] == 2, "正常流水必须零误报"
    got = {(a["rule"], a["account"]) for a in data["alerts"]}
    want = {(f["rule"], f["account"]) for f in labels}
    assert got == want, f"应精确命中两类欺诈，实际 {got}"

    # u9001 burst: 12 events inside <60s
    burst = next(a for a in data["alerts"] if a["rule"] == "burst_small_pay")
    snap = burst["window_snapshot"]
    assert snap["event_count"] == 12
    assert snap["time_range"]["span_seconds"] < 60
    assert snap["aggregate"]["count"] == 12
    assert snap["aggregate"]["unseen_region_at_burst_start"] is True

    # u9002 new device then big withdraw
    nd = next(a for a in data["alerts"]
              if a["rule"] == "new_device_big_withdraw")
    assert nd["window_snapshot"]["aggregate"]["withdraw_amount"] == 48000.0
    assert nd["window_snapshot"]["aggregate"]["new_device"] == "d777-new"


def test_benign_variants_do_not_fire(rule_store):
    """Rule semantics must separate fraud from the benign look-alikes:
    frequent small pays in known regions, new-device logins without big
    withdrawals, and big-ish amounts without the new-device precondition."""
    book = rule_store.load()
    assert book.status == "loaded"
    det = eng.Engine(rule_store.active)

    # frequent pays but the region is already known -> no alert
    known = [
        {"ts": f"2026-10-01T00:00:{i:02d}", "account": "uA",
         "device": "d1", "amount": 9.9, "action": "pay",
         "ip_region": "110000"}
        for i in range(12)
    ]
    # seed the region as known with an earlier login
    known.insert(0, {"ts": "2026-09-30T00:00:00", "account": "uA",
                     "device": "d1", "amount": 0, "action": "login",
                     "ip_region": "110000"})
    src = rule_store.rules_path.parent / "benign.jsonl"
    src.write_text("\n".join(json.dumps(e) for e in known), encoding="utf-8")
    assert det.run(src) == []

    # new device login, then a withdraw below the amount threshold -> no alert
    below = [
        {"ts": "2026-10-01T00:00:00", "account": "uB", "device": "d-new",
         "amount": 0, "action": "login", "ip_region": "310000"},
        {"ts": "2026-10-01T00:00:30", "account": "uB", "device": "d-new",
         "amount": 199.0, "action": "withdraw", "ip_region": "310000"},
    ]
    src.write_text("\n".join(json.dumps(e) for e in below), encoding="utf-8")
    assert det.run(src) == []

    # big withdraw on an already-known device -> no alert
    known_dev = [
        {"ts": "2026-09-30T00:00:00", "account": "uC", "device": "d-old",
         "amount": 0, "action": "login", "ip_region": "440000"},
        {"ts": "2026-10-01T00:00:00", "account": "uC", "device": "d-old",
         "amount": 48000.0, "action": "withdraw", "ip_region": "440000"},
    ]
    src.write_text("\n".join(json.dumps(e) for e in known_dev), encoding="utf-8")
    assert det.run(src) == []


# --------------------------------------------------------------------------- #
# requirement ③: explainable snapshot + rule version on every alert
# --------------------------------------------------------------------------- #

def test_alert_snapshot_fields(tmp_path):
    _, out = run_cli(tmp_path)
    data = load_alerts(out)
    for alert in data["alerts"]:
        snap = alert["window_snapshot"]
        assert snap["event_count"] > 0
        assert snap["time_range"]["first"] <= snap["time_range"]["last"]
        assert snap["aggregate"]
        assert alert["rule_version"] == data["rule_version"]
        assert alert["rule_version"].startswith("v")
        assert any(line.startswith("rule:") for line in alert["rule_text"])
        assert alert["trigger_event"]["account"] == alert["account"]


# --------------------------------------------------------------------------- #
# requirement ①: text rules, validation, rollback with reason
# --------------------------------------------------------------------------- #

@pytest.mark.parametrize("bad_text, fragment", [
    ("rule: burst_small_pay\nwindow: 六十秒\ncount: 12\naction: pay\nregion: unseen\n",
     "正整数"),
    ("rule: ghost_rule\nwindow: 60\ncount: 1\n", "未知规则"),
    ("rule: burst_small_pay\nwindow: 60\ncount: 12\naction: pay\n",
     "缺少必填键"),
    ("rule: burst_small_pay\nwindow: 60\ncount: 12\naction: pay\nregion: unseen\nbogus: 1\n",
     "不支持键"),
    ("window: 60\ncount: 12\n", "缺少 rule"),
])
def test_parser_rejects_bad_rules(bad_text, fragment):
    with pytest.raises(eng.RuleLoadError) as exc:
        eng.parse_rules(bad_text)
    assert fragment in str(exc.value)


def test_load_failure_rolls_back_with_reason(rule_store):
    first = rule_store.load()
    assert first.status == "loaded"
    good_version = rule_store.active.version

    rule_store.rules_path.write_text(
        "rule: burst_small_pay\nwindow: nope\ncount: 12\n"
        "action: pay\nregion: unseen\n",
        encoding="utf-8",
    )
    second = rule_store.load()
    assert second.status == "rolled_back"
    assert second.active_version == good_version
    assert "正整数" in second.reason

    log = rule_store.history()
    assert log[-1]["status"] == "rolled_back"
    assert log[-1]["active_version"] == good_version

    # engine still runs with the previous good version
    alerts = eng.Engine(rule_store.active).run(EVENTS)
    assert len(alerts) == 2
    assert all(a["rule_version"] == good_version for a in alerts)


def test_first_load_without_history_fails_closed(rule_store):
    state = rule_store.rules_path.parent / "state"
    assert not state.exists()
    rule_store.rules_path.write_text("rule: no_such_rule\n", encoding="utf-8")
    result = rule_store.load()
    assert result.status == "unrecoverable"
    assert result.active_version is None


def test_cross_process_recovery_from_last_good(tmp_path):
    """A fresh process (no in-memory previous version) must recover the
    persisted last-good rules when the on-disk file is broken."""
    rules = tmp_path / "rules" / "rules.txt"
    rules.parent.mkdir()
    rules.write_text(RULES_SRC.read_text(encoding="utf-8"), encoding="utf-8")

    proc, out = run_cli(tmp_path, rules_path=rules)
    assert proc.returncode == 0
    good = load_alerts(out)["rule_version"]

    rules.write_text("rule: burst_small_pay\nwindow: x\n", encoding="utf-8")
    proc, out = run_cli(tmp_path, rules_path=rules)
    assert proc.returncode == 0, "回滚后引擎应可用"
    assert "rolled_back" in proc.stdout
    # seq advances on recovery but the content hash must be identical
    recovered = load_alerts(out)["rule_version"]
    assert recovered.split("-", 1)[1] == good.split("-", 1)[1]

    log = json.loads((rules.parent / "state" / "load_log.json")
                     .read_text(encoding="utf-8"))
    assert any(e["status"] == "rolled_back" for e in log["entries"])


def test_hot_reload_switches_version(rule_store):
    rule_store.load()
    v1 = rule_store.active.version
    new_text = rule_store.rules_path.read_text(encoding="utf-8").replace(
        "count: 12", "count: 10"
    )
    rule_store.rules_path.write_text(new_text, encoding="utf-8")
    result = rule_store.load()
    assert result.status == "loaded"
    assert rule_store.active.version != v1
    # unchanged content must not mint a new version
    again = rule_store.load()
    assert again.status == "unchanged"


# --------------------------------------------------------------------------- #
# requirement ④: watch-mode hot reload + automatic rollback via subprocess
# --------------------------------------------------------------------------- #

def test_watch_hot_reload_and_rollback(tmp_path):
    rules = tmp_path / "rules" / "rules.txt"
    rules.parent.mkdir(parents=True)
    rules.write_text(RULES_SRC.read_text(encoding="utf-8"), encoding="utf-8")
    out = tmp_path / "alerts.json"
    proc = subprocess.Popen(
        [sys.executable, "-I", str(ENGINE), str(EVENTS), str(out),
         "--rules", str(rules), "--watch", "--interval", "0.1"],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE,
        text=True, encoding="utf-8",
    )
    try:
        time.sleep(1.0)
        assert load_alerts(out)["alert_count"] == 2

        # valid hot reload
        rules.write_text(
            RULES_SRC.read_text(encoding="utf-8").replace("count: 12", "count: 10"),
            encoding="utf-8",
        )
        deadline = time.time() + 10
        while time.time() < deadline:
            text = rules.parent.joinpath(
                "state", "load_log.json").read_text(encoding="utf-8")
            if '"loaded"' in text and "v2" in text:
                break
            time.sleep(0.2)
        assert load_alerts(out)["rule_version"].startswith("v2")

        # broken file -> rollback, alerts keep flowing
        rules.write_text("rule: burst_small_pay\nwindow: x\n", encoding="utf-8")
        deadline = time.time() + 10
        while time.time() < deadline:
            log = json.loads((rules.parent / "state" / "load_log.json")
                             .read_text(encoding="utf-8"))
            if any(e["status"] == "rolled_back" for e in log["entries"]):
                break
            time.sleep(0.2)
        assert load_alerts(out)["alert_count"] == 2
    finally:
        proc.terminate()
        proc.wait(timeout=10)


# --------------------------------------------------------------------------- #
# requirement ⑤: event file format untouched
# --------------------------------------------------------------------------- #

def test_event_format_unchanged():
    with open(EVENTS, encoding="utf-8") as fh:
        first = json.loads(fh.readline())
    assert set(first) == {"ts", "account", "device", "amount",
                          "action", "ip_region"}
    # engine only reads the file; it must not write next to it
    assert not (EVENTS.parent / "events.jsonl.tmp").exists()
