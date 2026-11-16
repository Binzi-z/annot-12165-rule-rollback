"""Hot-reloadable risk rule engine with rollback and explainable alerts.

Rules live in a human-readable text file (default: rules/rules.txt). Editing
that file and re-running (or running with --watch) applies the new rules
without a code release. A rules file that fails parsing/validation never
replaces the active rule set: the engine rolls back to the last good version
and records the reason in rules/state/load_log.json.

Usage:
    python engine.py EVENTS OUT [--rules PATH]
    python engine.py EVENTS OUT --watch [--interval 0.5] [--max-cycles N]
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import sys
import time
from collections import defaultdict, deque
from dataclasses import dataclass, field
from datetime import datetime
from pathlib import Path

ENGINE_DIR = Path(__file__).resolve().parent
DEFAULT_RULES = ENGINE_DIR / "rules" / "rules.txt"

# Windows consoles often default to GBK; the CLI output is UTF-8 Chinese.
for _stream in (sys.stdout, sys.stderr):
    if hasattr(_stream, "reconfigure"):
        _stream.reconfigure(encoding="utf-8", errors="replace")

ACTIONS = {"pay", "withdraw", "login", "refund", "view"}
BOOLEANS = {"true": True, "false": False}
COMMON_KEYS = {"rule"}
RULE_SPECS = {
    # rule name -> (required keys, optional keys)
    "burst_small_pay": (
        {"window", "count", "action", "region"},
        set(),
    ),
    "new_device_big_withdraw": (
        {"require_new_device", "follow_window", "action", "amount"},
        set(),
    ),
}


class RuleLoadError(Exception):
    """Raised when a rule text cannot be parsed or validated.

    The message always carries the concrete reason (with line numbers when
    available) so it can be persisted in the load log.
    """


# --------------------------------------------------------------------------- #
# Parsing and validation
# --------------------------------------------------------------------------- #

def _parse_blocks(text: str) -> list[dict]:
    """Split rule text into blocks of ordered (line_no, key, value) triples."""
    blocks: list[list[tuple[int, str, str]]] = []
    current: list[tuple[int, str, str]] = []
    for line_no, raw in enumerate(text.splitlines(), start=1):
        stripped = raw.strip()
        if not stripped:
            if current:
                blocks.append(current)
                current = []
            continue
        if stripped.startswith("#"):
            continue  # comments are ignored, never split a block
        if ":" not in stripped:
            raise RuleLoadError(f"第 {line_no} 行不是 '键: 值' 形式: {raw!r}")
        key, value = stripped.split(":", 1)
        key, value = key.strip(), value.strip()
        if not key or not value:
            raise RuleLoadError(f"第 {line_no} 行的键或值为空: {raw!r}")
        current.append((line_no, key, value))
    if current:
        blocks.append(current)
    return blocks


def _as_positive_int(value: str, key: str, line_no: int) -> int:
    try:
        parsed = int(value)
    except ValueError:
        raise RuleLoadError(
            f"第 {line_no} 行 {key} 必须是正整数，得到 {value!r}"
        ) from None
    if parsed <= 0:
        raise RuleLoadError(f"第 {line_no} 行 {key} 必须 > 0，得到 {parsed}")
    return parsed


def parse_rules(text: str) -> list[dict]:
    """Parse and validate rule text. Raises RuleLoadError on any defect."""
    blocks = _parse_blocks(text)
    if not blocks:
        raise RuleLoadError("规则文件为空，至少需要一条规则")

    rules: list[dict] = []
    seen_names: set[str] = set()
    for block in blocks:
        ordered: dict[str, str] = {}
        line_of: dict[str, int] = {}
        for line_no, key, value in block:
            if key in ordered:
                raise RuleLoadError(f"第 {line_no} 行键 {key} 重复出现")
            ordered[key] = value
            line_of[key] = line_no

        if "rule" not in ordered:
            raise RuleLoadError(f"第 {block[0][0]} 行开始的规则块缺少 rule 名称")
        name = ordered["rule"]
        if name not in RULE_SPECS:
            valid = ", ".join(sorted(RULE_SPECS))
            raise RuleLoadError(
                f"第 {line_of['rule']} 行未知规则 {name!r}，可选: {valid}"
            )
        if name in seen_names:
            raise RuleLoadError(f"规则 {name!r} 重复定义（第 {line_of['rule']} 行）")
        seen_names.add(name)

        required, optional = RULE_SPECS[name]
        allowed = COMMON_KEYS | required | optional
        for key, line_no in line_of.items():
            if key not in allowed:
                raise RuleLoadError(
                    f"第 {line_no} 行规则 {name!r} 不支持键 {key!r}，"
                    f"允许的键: {sorted(allowed)}"
                )
        missing = required - ordered.keys()
        if missing:
            raise RuleLoadError(
                f"规则 {name!r} 缺少必填键: {sorted(missing)}"
            )

        parsed: dict[str, object] = {"rule": name}
        for key, value in ordered.items():
            line_no = line_of[key]
            if key == "rule":
                continue
            if key in ("window", "count", "follow_window"):
                parsed[key] = _as_positive_int(value, key, line_no)
            elif key == "amount":
                try:
                    parsed[key] = float(value)
                except ValueError:
                    raise RuleLoadError(
                        f"第 {line_no} 行 amount 必须是数字，得到 {value!r}"
                    ) from None
                if parsed[key] < 0:
                    raise RuleLoadError(
                        f"第 {line_no} 行 amount 不能为负，得到 {value!r}"
                    )
            elif key == "action":
                if value not in ACTIONS:
                    raise RuleLoadError(
                        f"第 {line_no} 行 action {value!r} 无效，可选: {sorted(ACTIONS)}"
                    )
                parsed[key] = value
            elif key == "region":
                if value != "unseen":
                    raise RuleLoadError(
                        f"第 {line_no} 行 region 仅支持 'unseen'，得到 {value!r}"
                    )
                parsed[key] = value
            elif key == "require_new_device":
                if value not in BOOLEANS:
                    raise RuleLoadError(
                        f"第 {line_no} 行 require_new_device 必须是 true/false，"
                        f"得到 {value!r}"
                    )
                parsed[key] = BOOLEANS[value]
        rules.append(parsed)
    return rules


def _format_value(value: object) -> str:
    """Render a parsed value the same way a human writes it in rules.txt."""
    if isinstance(value, bool):
        return "true" if value else "false"
    if isinstance(value, float) and value.is_integer():
        return str(int(value))
    return str(value)


def render_rules(rules: list[dict]) -> str:
    """Canonical text rendering (used for last-good persistence and hashing)."""
    chunks = []
    for rule in rules:
        lines = [f"{key}: {_format_value(value)}" for key, value in rule.items()]
        chunks.append("\n".join(lines))
    return "\n\n".join(chunks) + "\n"


# --------------------------------------------------------------------------- #
# Rule store: versions, hot reload, automatic rollback
# --------------------------------------------------------------------------- #

@dataclass
class LoadResult:
    status: str                   # loaded | unchanged | rolled_back | unrecoverable
    reason: str
    active_version: str | None
    seq: int


@dataclass
class RuleBook:
    rules: list[dict]
    version: str
    seq: int
    text: str

    def rule_text(self, name: str) -> list[str]:
        for rule in self.rules:
            if rule["rule"] == name:
                return [f"{k}: {_format_value(v)}" for k, v in rule.items()]
        raise KeyError(name)


class RuleStore:
    """Loads rule text and keeps the last known-good version for rollback."""

    def __init__(self, rules_path: str | Path):
        self.rules_path = Path(rules_path)
        self.state_dir = self.rules_path.resolve().parent / "state"
        self.last_good_path = self.state_dir / "last_good.txt"
        self.log_path = self.state_dir / "load_log.json"
        self.seq_path = self.state_dir / "seq.txt"
        self.active: RuleBook | None = None
        self._content_hash: str | None = None

    # -- persistence helpers ------------------------------------------------ #

    def _read_log(self) -> list[dict]:
        if not self.log_path.exists():
            return []
        try:
            return json.loads(self.log_path.read_text(encoding="utf-8"))["entries"]
        except (json.JSONDecodeError, KeyError):
            return []

    def _write_log(self, entries: list[dict]) -> None:
        self.state_dir.mkdir(parents=True, exist_ok=True)
        entries = entries[-200:]
        tmp = self.log_path.with_suffix(".json.tmp")
        tmp.write_text(
            json.dumps({"entries": entries}, ensure_ascii=False, indent=2),
            encoding="utf-8",
        )
        os.replace(tmp, self.log_path)

    def _record(self, result: LoadResult) -> None:
        entries = self._read_log()
        entries.append(
            {
                "ts": datetime.now().isoformat(timespec="seconds"),
                "path": str(self.rules_path),
                "status": result.status,
                "reason": result.reason,
                "active_version": result.active_version,
                "seq": result.seq,
            }
        )
        self._write_log(entries)

    @staticmethod
    def _hash(text: str) -> str:
        return hashlib.sha256(text.encode("utf-8")).hexdigest()[:8]

    def _next_seq(self) -> int:
        if self.seq_path.exists():
            try:
                return int(self.seq_path.read_text(encoding="utf-8").strip()) + 1
            except ValueError:
                pass
        return 1

    def _write_seq(self, seq: int) -> None:
        self.state_dir.mkdir(parents=True, exist_ok=True)
        self.seq_path.write_text(str(seq), encoding="utf-8")

    def _book_from(self, rules: list[dict], seq: int) -> RuleBook:
        text = render_rules(rules)
        return RuleBook(rules=rules, version=f"v{seq}-{self._hash(text)}",
                        seq=seq, text=text)

    # -- loading ------------------------------------------------------------- #

    def load(self) -> LoadResult:
        """Validate the rules file; on failure roll back to the last good one."""
        try:
            raw = self.rules_path.read_text(encoding="utf-8")
            rules = parse_rules(raw)
        except (OSError, RuleLoadError) as exc:
            return self._rollback(f"规则加载失败: {exc}")

        book = self._book_from(rules, self._next_seq())
        if self.active is not None and book.text == self.active.text:
            result = LoadResult(
                status="unchanged",
                reason="规则内容与当前生效版本一致，无需切换",
                active_version=self.active.version,
                seq=self.active.seq,
            )
            self._record(result)
            return result

        self.state_dir.mkdir(parents=True, exist_ok=True)
        tmp = self.last_good_path.with_suffix(".txt.tmp")
        tmp.write_text(book.text, encoding="utf-8")
        os.replace(tmp, self.last_good_path)
        self._write_seq(book.seq)
        previous = self.active.version if self.active else "（无）"
        self.active = book
        self._content_hash = self._hash(book.text)
        result = LoadResult(
            status="loaded",
            reason=f"新规则校验通过并生效（上一版: {previous}）",
            active_version=book.version,
            seq=book.seq,
        )
        self._record(result)
        return result

    def _rollback(self, reason: str) -> LoadResult:
        if self.active is None:
            if self.last_good_path.exists():
                # Process restarted: recover the persisted last-good version.
                rules = parse_rules(self.last_good_path.read_text(encoding="utf-8"))
                seq = self._next_seq()
                self.active = self._book_from(rules, seq)
                self._write_seq(seq)
                result = LoadResult(
                    status="rolled_back",
                    reason=f"{reason}；已从磁盘上的上次良好版本恢复",
                    active_version=self.active.version,
                    seq=seq,
                )
                self._record(result)
                return result
            result = LoadResult(
                status="unrecoverable",
                reason=f"{reason}；且没有可回滚的历史版本",
                active_version=None,
                seq=0,
            )
            self._record(result)
            return result

        # Hot reload failure: keep the already-active version untouched.
        result = LoadResult(
            status="rolled_back",
            reason=f"{reason}；保持进程内上一版 {self.active.version} 继续生效",
            active_version=self.active.version,
            seq=self.active.seq,
        )
        self._record(result)
        return result

    def history(self) -> list[dict]:
        return self._read_log()


# --------------------------------------------------------------------------- #
# Detectors
# --------------------------------------------------------------------------- #

@dataclass
class BurstRegionDetector:
    """burst_small_pay: N matching events inside a sliding window, anchored on
    a region the account had never used before the burst started."""

    cfg: dict
    windows: dict[str, deque] = field(default_factory=lambda: defaultdict(deque))
    anchors: dict[str, str] = field(default_factory=dict)
    fired: set[tuple[str, str]] = field(default_factory=set)

    def evaluate(self, event: dict, line_no: int, ts: datetime,
                 known_regions: dict[str, set[str]]) -> dict | None:
        cfg = self.cfg
        name, account = cfg["rule"], event["account"]
        if event.get("action") != cfg["action"]:
            return None
        if (name, account) in self.fired:
            return None

        window = cfg["window"]
        dq = self.windows[account]
        # Evict events outside the sliding window.
        while dq and (ts - dq[0]["_ts"]).total_seconds() >= window:
            dq.popleft()
        if not dq:
            self.anchors.pop(account, None)
            # A burst can only start from a region unseen before this event.
            if event["ip_region"] in known_regions.get(account, set()):
                return None
            self.anchors[account] = event["ip_region"]
        if event["ip_region"] != self.anchors.get(account):
            return None

        event = dict(event)
        event["_ts"] = ts
        event["_line"] = line_no
        dq.append(event)
        if len(dq) < cfg["count"]:
            return None

        self.fired.add((name, account))
        members = list(dq)
        first, last = members[0], members[-1]
        return {
            "rule": name,
            "account": account,
            "trigger_line": line_no,
            "trigger_event": {k: v for k, v in event.items() if not k.startswith("_")},
            "window_snapshot": {
                "event_count": len(members),
                "threshold_count": cfg["count"],
                "window_seconds": window,
                "time_range": {
                    "first": first["ts"],
                    "last": last["ts"],
                    "span_seconds": (last["_ts"] - first["_ts"]).total_seconds(),
                },
                "aggregate": {
                    "action": cfg["action"],
                    "count": len(members),
                    "total_amount": round(sum(m["amount"] for m in members), 2),
                    "regions": sorted({m["ip_region"] for m in members}),
                    "unseen_region_at_burst_start": True,
                },
            },
        }


@dataclass
class NewDeviceAmountDetector:
    """new_device_big_withdraw: first login on a new device, then a large
    matching action on the same device within follow_window seconds."""

    cfg: dict
    logins: dict[str, dict[str, dict]] = field(
        default_factory=lambda: defaultdict(dict)
    )
    fired: set[tuple[str, str]] = field(default_factory=set)

    def evaluate(self, event: dict, line_no: int, ts: datetime,
                 known_devices: dict[str, set[str]]) -> dict | None:
        cfg = self.cfg
        name, account, device = cfg["rule"], event["account"], event["device"]
        action = event.get("action")

        if action == "login" and cfg.get("require_new_device"):
            if device not in known_devices.get(account, set()):
                self.logins[account].setdefault(
                    device, {"event": event, "ts": ts, "line": line_no}
                )
            return None

        if action != cfg["action"]:
            return None
        if (name, account) in self.fired:
            return None
        login = self.logins.get(account, {}).get(device)
        if login is None:
            return None
        delta = (ts - login["ts"]).total_seconds()
        if delta < 0 or delta > cfg["follow_window"]:
            return None
        if event.get("amount", 0) < cfg["amount"]:
            return None

        self.fired.add((name, account))
        return {
            "rule": name,
            "account": account,
            "trigger_line": line_no,
            "trigger_event": event,
            "window_snapshot": {
                "event_count": 2,
                "time_range": {
                    "first": login["event"]["ts"],
                    "last": event["ts"],
                    "span_seconds": delta,
                },
                "aggregate": {
                    "new_device": device,
                    "new_device_login_line": login["line"],
                    "follow_window_seconds": cfg["follow_window"],
                    "withdraw_amount": event["amount"],
                    "amount_threshold": cfg["amount"],
                },
            },
        }


def build_detectors(book: RuleBook):
    detectors = []
    for cfg in book.rules:
        if cfg["rule"] == "burst_small_pay":
            detectors.append(BurstRegionDetector(cfg))
        elif cfg["rule"] == "new_device_big_withdraw":
            detectors.append(NewDeviceAmountDetector(cfg))
    return detectors


# --------------------------------------------------------------------------- #
# Engine
# --------------------------------------------------------------------------- #

class Engine:
    def __init__(self, book: RuleBook):
        self.book = book
        self.detectors = build_detectors(book)

    def run(self, events_path: str | Path) -> list[dict]:
        known_regions: dict[str, set[str]] = defaultdict(set)
        known_devices: dict[str, set[str]] = defaultdict(set)
        alerts: list[dict] = []
        with open(events_path, encoding="utf-8") as fh:
            for line_no, line in enumerate(fh, start=1):
                if not line.strip():
                    continue
                event = json.loads(line)
                ts = datetime.fromisoformat(event["ts"])
                for detector in self.detectors:
                    state = (known_regions if isinstance(detector, BurstRegionDetector)
                             else known_devices)
                    alert = detector.evaluate(event, line_no, ts, state)
                    if alert is not None:
                        alert["rule_version"] = self.book.version
                        alert["rule_text"] = self.book.rule_text(alert["rule"])
                        alerts.append(alert)
                # History is updated after detection so "unseen"/"new" is
                # judged against everything prior to this event.
                known_regions[event["account"]].add(event["ip_region"])
                known_devices[event["account"]].add(event["device"])
        return alerts


def write_alerts(path: str | Path, book: RuleBook, source: str | Path,
                 alerts: list[dict]) -> None:
    payload = {
        "rule_version": book.version,
        "source": str(source),
        "generated_at": datetime.now().isoformat(timespec="seconds"),
        "alert_count": len(alerts),
        "alerts": alerts,
    }
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    tmp = path.with_suffix(path.suffix + ".tmp")
    tmp.write_text(json.dumps(payload, ensure_ascii=False, indent=2),
                   encoding="utf-8")
    os.replace(tmp, path)


# --------------------------------------------------------------------------- #
# CLI
# --------------------------------------------------------------------------- #

def _print_load(result: LoadResult) -> None:
    marker = {"loaded": "✅", "unchanged": "ℹ️", "rolled_back": "⚠️",
              "unrecoverable": "❌"}[result.status]
    print(f"{marker} [{result.status}] {result.reason}")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description="Hot-reloadable risk engine")
    parser.add_argument("events")
    parser.add_argument("out")
    parser.add_argument("--rules", default=str(DEFAULT_RULES))
    parser.add_argument("--watch", action="store_true",
                        help="监听规则文件变化并自动热加载/回滚")
    parser.add_argument("--interval", type=float, default=0.5,
                        help="watch 模式轮询间隔秒数")
    parser.add_argument("--max-cycles", type=int, default=0,
                        help="watch 模式处理多少次规则变化后退出（0=不限制）")
    args = parser.parse_args(argv)

    store = RuleStore(args.rules)
    result = store.load()
    _print_load(result)
    if result.status == "unrecoverable" or store.active is None:
        print("无可用规则版本，引擎拒绝启动（fail-closed）", file=sys.stderr)
        return 2

    def run_once() -> int:
        alerts = Engine(store.active).run(args.events)  # type: ignore[union-attr]
        write_alerts(args.out, store.active, args.events, alerts)  # type: ignore[arg-type]
        print(f"   规则版本 {store.active.version}：{len(alerts)} 条告警 -> {args.out}")
        return len(alerts)

    run_once()
    if not args.watch:
        return 0

    # Track the on-disk file hash (not the active book hash) so a rolled-back
    # file still re-triggers a load attempt once it is edited again.
    last_file_hash = RuleStore._hash(Path(args.rules).read_text(encoding="utf-8"))
    cycles = 1
    print(f"👀 监听 {args.rules}（每 {args.interval}s）…")
    try:
        while True:
            time.sleep(args.interval)
            try:
                raw = Path(args.rules).read_text(encoding="utf-8")
            except OSError:
                continue
            if RuleStore._hash(raw) == last_file_hash:
                continue
            last_file_hash = RuleStore._hash(raw)
            result = store.load()
            _print_load(result)
            run_once()
            cycles += 1
            if args.max_cycles and cycles >= args.max_cycles:
                print(f"已达 max-cycles={args.max_cycles}，watch 退出")
                return 0
    except KeyboardInterrupt:
        print("\nwatch 已停止")
        return 0


if __name__ == "__main__":
    raise SystemExit(main())
