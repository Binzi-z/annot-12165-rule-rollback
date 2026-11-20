import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXEC_API = re.compile(
    r"\b(?:system|popen|execl|execlp|execle|execv|execvp|execvpe|execve|posix_spawn"
    r"|RUN_SHELL|shell_run|cmd_run|tmpl_exec)\s*\(")

VARIANTS = {
    "concat_system", "popen_config", "exec_arg_misuse", "shell_wrapper",
    "template_rendered", "macro_indirection", "funcptr_dispatch", "static_lib_hop",
}
SOURCES = {"config_file", "network_downlink", "env_var"}


def load_json(rel):
    with open(os.path.join(ROOT, rel), encoding="utf-8") as fh:
        return json.load(fh)


def run(cmd):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                          encoding="utf-8", errors="replace")


def test_labels_anchor_real_lines():
    doc = load_json("labels.json")
    vulns = doc["vulns"]
    assert len(vulns) == 50
    assert {v["sink"] for v in vulns} == {"command_injection"}
    for v in vulns:
        lines = open(os.path.join(ROOT, v["file"]), encoding="utf-8").read().splitlines()
        assert 1 <= v["line"] <= len(lines), (v["id"], v["line"], len(lines))
        assert EXEC_API.search(lines[v["line"] - 1]), (v["id"], lines[v["line"] - 1])
        assert v["variant"] and v["source"] and v["path"] and v["entry"]


def test_label_coverage():
    vulns = load_json("labels.json")["vulns"]
    assert {v["variant"] for v in vulns} == VARIANTS
    assert {v["source"] for v in vulns} == SOURCES


def test_corpus_scale():
    total = 0
    files = 0
    for dirpath, _dirnames, names in os.walk(os.path.join(ROOT, "firmware")):
        for name in names:
            if name.endswith((".c", ".h", ".cpp")):
                files += 1
                with open(os.path.join(dirpath, name), encoding="utf-8") as fh:
                    total += sum(1 for _ in fh)
    assert files > 300, files
    assert total >= 200000, total


def test_sanitizer_config():
    cfg = load_json("config/sanitizers.json")
    names = {s["name"] for s in cfg["sanitizers"]}
    assert "cmd_allowlist_ok" in names and "execv" in names
    assert "shell_run" in cfg["shell_wrappers"]
    assert "RUN_SHELL" in cfg["shell_wrappers"]
    assert "rotate.sh.j2" in cfg["safe_templates"]


def test_baseline_emits_required_fields():
    proc = run([sys.executable, os.path.join(ROOT, "baseline", "scan.py")])
    assert proc.returncode == 0, proc.stderr
    findings = json.loads(proc.stdout)["findings"]
    assert findings
    for f in findings:
        assert f["file"].startswith("firmware/") and f["line"] > 0
        assert f["sink"] == "command_injection"


def test_baseline_is_a_noisy_starting_point(tmp_path):
    proc = run([sys.executable, os.path.join(ROOT, "baseline", "scan.py")])
    assert proc.returncode == 0, proc.stderr
    out = tmp_path / "o.json"
    out.write_text(proc.stdout, encoding="utf-8")
    ev = run([sys.executable, os.path.join(ROOT, "eval.py"), str(out)])
    assert ev.returncode == 0, ev.stderr
    m = re.search(r"recall=([\d.]+)%.*false_positive_rate=([\d.]+)%", ev.stdout)
    assert m, ev.stdout
    assert float(m.group(1)) >= 90.0, ev.stdout
    assert float(m.group(2)) > 20.0, ev.stdout


def test_eval_accepts_sarif(tmp_path):
    vulns = load_json("labels.json")["vulns"][:3]
    results = [{
        "ruleId": "command_injection",
        "message": {"text": v["evidence"]},
        "locations": [{"physicalLocation": {
            "artifactLocation": {"uri": v["file"]},
            "region": {"startLine": v["line"]},
        }}],
    } for v in vulns]
    sarif = {"version": "2.1.0", "runs": [{"tool": {"driver": {"name": "t"}}, "results": results}]}
    path = tmp_path / "out.sarif"
    path.write_text(json.dumps(sarif), encoding="utf-8")
    ev = run([sys.executable, os.path.join(ROOT, "eval.py"), str(path)])
    assert ev.returncode == 0, ev.stderr
    assert "TP=3" in ev.stdout, ev.stdout
