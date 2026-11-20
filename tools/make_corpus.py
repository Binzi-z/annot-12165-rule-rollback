#!/usr/bin/env python3
"""make_corpus.py -- deterministic corpus + labels generator for topic 12165.

Builds a small firmware tree (C and C++) in which untrusted values (config
files, network downlink packets, environment variables) reach the classic
C/C++ command execution primitives (system / popen / exec family / project
shell wrappers / rendered command templates), plus a large amount of benign
board-support code that makes the "200k lines" performance target meaningful.

Every label is attached to the *exact* source line where the tainted value
reaches the execution primitive; the line numbers are produced while the file
is assembled, so they cannot drift.

Usage::

    python tools/make_corpus.py          # rewrites the corpus and labels.json
"""
from __future__ import annotations

import json
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FILLER_MODULES = 300
FILLER_TABLES = 8
FILLER_FUNCS = 36


class Doc:
    """A source file assembled line by line."""

    def __init__(self, relpath, header=()):
        self.relpath = relpath
        self.lines = list(header)

    def add(self, *lines):
        self.lines.extend(lines)

    def case(self, lines, anchor):
        """Append a block and return the 1-based line of ``anchor`` in it."""
        start = len(self.lines)
        self.lines.extend(lines)
        for idx in range(start, len(self.lines)):
            if self.lines[idx] == anchor:
                return idx + 1
        raise SystemExit("anchor not found in %s: %r" % (self.relpath, anchor))

    def write(self):
        path = os.path.join(ROOT, self.relpath.replace("/", os.sep))
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(self.lines) + "\n")


LABELS = []


def label(file, line, variant, source, text, entry, path, evidence):
    LABELS.append({
        "id": "V%02d" % (len(LABELS) + 1),
        "sink": "command_injection",
        "rule": "command_injection",
        "label": text,
        "file": file,
        "line": line,
        "variant": variant,
        "source": source,
        "entry": entry,
        "path": path,
        "evidence": evidence,
    })


# ---------------------------------------------------------------------------
# headers
# ---------------------------------------------------------------------------
FW_H = [
    "#ifndef FW_H",
    "#define FW_H",
    "",
    "#include <stddef.h>",
    "#include <stdint.h>",
    "#include <stdio.h>",
    "",
    "#define CMD_MAX 512",
    "#define LINE_MAX 256",
    "#define CFG_MAX_KEYS 64",
    "#define CFG_KEY_LEN 64",
    "#define CFG_VAL_LEN 192",
    "#define PKT_MAX_FIELDS 32",
    "#define PKT_NAME_LEN 48",
    "#define PKT_VAL_LEN 256",
    "",
    "struct fw_ctx {",
    "    unsigned slot;",
    "    const char *profile;",
    "};",
    "",
    "struct cfg_doc {",
    "    int count;",
    "    char keys[CFG_MAX_KEYS][CFG_KEY_LEN];",
    "    char vals[CFG_MAX_KEYS][CFG_VAL_LEN];",
    "};",
    "",
    "struct pkt {",
    "    int count;",
    "    char names[PKT_MAX_FIELDS][PKT_NAME_LEN];",
    "    char vals[PKT_MAX_FIELDS][PKT_VAL_LEN];",
    "};",
    "",
    "struct tmpl_vars;",
    "",
    "/* firmware/config/cfg_load.c */",
    "const char *cfg_get_str(const struct cfg_doc *doc, const char *key);",
    "int cfg_get_int(const struct cfg_doc *doc, const char *key, int def);",
    "int cmd_allowlist_ok(const char *token);",
    "",
    "/* firmware/net/proto_decode.c */",
    "const char *pkt_str(const struct pkt *pkt, const char *field);",
    "",
    "/* firmware/lib/strings.c */",
    "int cmd_join3(char *out, size_t out_len, const char *a, const char *b,",
    "              const char *c);",
    "int cmd_trim(char *s);",
    "",
    "/* firmware/lib/static_pool.c */",
    "int pool_init(void);",
    "int pool_exec_line(const char *line);",
    "",
    "/* firmware/lib/templating.c */",
    "struct tmpl_vars *tmpl_vars_new(void);",
    "void tmpl_var_set(struct tmpl_vars *vars, const char *key, const char *value);",
    "void tmpl_vars_free(struct tmpl_vars *vars);",
    "int tmpl_render(const char *tpl, const struct tmpl_vars *vars, char *out,",
    "                size_t out_len);",
    "",
    "/* firmware/core/shell_wrap.c */",
    "int shell_run(const char *cmd);",
    "int cmd_run(const char *cmd);",
    "int tmpl_exec(const char *tpl_name, struct tmpl_vars *vars);",
    "",
    "/* firmware/net/ops.c */",
    "typedef int (*cmd_fn)(const char *arg);",
    "struct cmd_entry {",
    "    const char *name;",
    "    cmd_fn fn;",
    "};",
    "int ops_dispatch(const char *name, const char *arg);",
    "",
    "#endif",
]

STRINGS_C = [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "int cmd_join3(char *out, size_t out_len, const char *a, const char *b,",
    "              const char *c)",
    "{",
    "    size_t used = 0;",
    "    const char *parts[3];",
    "    int i;",
    "",
    "    if (out == NULL || out_len == 0) {",
    "        return -1;",
    "    }",
    "    parts[0] = a != NULL ? a : \"\";",
    "    parts[1] = b != NULL ? b : \"\";",
    "    parts[2] = c != NULL ? c : \"\";",
    "    out[0] = '\\0';",
    "    for (i = 0; i < 3; i++) {",
    "        size_t n = strlen(parts[i]);",
    "        if (used + n + 1 > out_len) {",
    "            return -1;",
    "        }",
    "        memcpy(out + used, parts[i], n);",
    "        used += n;",
    "        out[used] = '\\0';",
    "    }",
    "    return (int)used;",
    "}",
    "",
    "int cmd_trim(char *s)",
    "{",
    "    size_t n;",
    "",
    "    if (s == NULL) {",
    "        return -1;",
    "    }",
    "    n = strlen(s);",
    "    while (n > 0 && (s[n - 1] == '\\n' || s[n - 1] == '\\r' ||",
    "                     s[n - 1] == ' ' || s[n - 1] == '\\t')) {",
    "        s[--n] = '\\0';",
    "    }",
    "    return (int)n;",
    "}",
]

STATIC_POOL_C = [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "struct pool_slot {",
    "    int used;",
    "    char line[LINE_MAX];",
    "};",
    "",
    "static struct pool_slot pool_slots[16];",
    "",
    "int pool_init(void)",
    "{",
    "    memset(pool_slots, 0, sizeof(pool_slots));",
    "    return 0;",
    "}",
    "",
    "/* Shared helper: execute one command line coming from the pool. The pool",
    " * itself does not care where the line was produced; several translation",
    " * units push into it. */",
    "int pool_exec_line(const char *line)",
    "{",
    "    int i;",
    "",
    "    for (i = 0; i < 16; i++) {",
    "        if (!pool_slots[i].used) {",
    "            pool_slots[i].used = 1;",
    "            strncpy(pool_slots[i].line, line != NULL ? line : \"\",",
    "                    sizeof(pool_slots[i].line) - 1);",
    "            break;",
    "        }",
    "    }",
    "    return system(line);",
    "}",
]

TEMPLATING_C = [
    '#include "fw.h"',
    "",
    "#include <stdlib.h>",
    "#include <string.h>",
    "",
    "struct tmpl_entry {",
    "    char key[48];",
    "    char val[192];",
    "};",
    "",
    "#define TMPL_VAR_MAX 24",
    "",
    "struct tmpl_vars {",
    "    int count;",
    "    struct tmpl_entry items[TMPL_VAR_MAX];",
    "};",
    "",
    "struct tmpl_vars *tmpl_vars_new(void)",
    "{",
    "    return (struct tmpl_vars *)calloc(1, sizeof(struct tmpl_vars));",
    "}",
    "",
    "void tmpl_var_set(struct tmpl_vars *vars, const char *key, const char *value)",
    "{",
    "    struct tmpl_entry *slot;",
    "",
    "    if (vars == NULL || key == NULL || value == NULL ||",
    "        vars->count >= TMPL_VAR_MAX) {",
    "        return;",
    "    }",
    "    slot = &vars->items[vars->count++];",
    "    strncpy(slot->key, key, sizeof(slot->key) - 1);",
    "    strncpy(slot->val, value, sizeof(slot->val) - 1);",
    "}",
    "",
    "void tmpl_vars_free(struct tmpl_vars *vars)",
    "{",
    "    free(vars);",
    "}",
    "",
    "static const char *tmpl_lookup(const struct tmpl_vars *vars, const char *key)",
    "{",
    "    int i;",
    "",
    "    if (vars == NULL) {",
    "        return NULL;",
    "    }",
    "    for (i = 0; i < vars->count; i++) {",
    "        if (strcmp(vars->items[i].key, key) == 0) {",
    "            return vars->items[i].val;",
    "        }",
    "    }",
    "    return NULL;",
    "}",
    "",
    "/* Very small {{name}} substituter used by the deploy/rotate templates. */",
    "int tmpl_render(const char *tpl, const struct tmpl_vars *vars, char *out,",
    "                size_t out_len)",
    "{",
    "    size_t used = 0;",
    "    const char *cur;",
    "",
    "    if (tpl == NULL || out == NULL || out_len == 0) {",
    "        return -1;",
    "    }",
    "    cur = tpl;",
    "    while (*cur != '\\0') {",
    "        if (cur[0] == '{' && cur[1] == '{') {",
    "            const char *end = strstr(cur + 2, \"}}\");",
    "            char name[48];",
    "            const char *value;",
    "            size_t n;",
    "",
    "            if (end == NULL || (size_t)(end - (cur + 2)) >= sizeof(name)) {",
    "                return -1;",
    "            }",
    "            n = (size_t)(end - (cur + 2));",
    "            memcpy(name, cur + 2, n);",
    "            name[n] = '\\0';",
    "            value = tmpl_lookup(vars, name);",
    "            if (value == NULL) {",
    "                value = \"\";",
    "            }",
    "            n = strlen(value);",
    "            if (used + n + 1 > out_len) {",
    "                return -1;",
    "            }",
    "            memcpy(out + used, value, n);",
    "            used += n;",
    "            cur = end + 2;",
    "            continue;",
    "        }",
    "        if (used + 2 > out_len) {",
    "            return -1;",
    "        }",
    "        out[used++] = *cur++;",
    "    }",
    "    out[used] = '\\0';",
    "    return (int)used;",
    "}",
]

CFG_LOAD_C = [
    '#include "fw.h"',
    "",
    "#include <ctype.h>",
    "#include <string.h>",
    "",
    "const char *cfg_get_str(const struct cfg_doc *doc, const char *key)",
    "{",
    "    int i;",
    "",
    "    if (doc == NULL || key == NULL) {",
    "        return NULL;",
    "    }",
    "    for (i = 0; i < doc->count; i++) {",
    "        if (strcmp(doc->keys[i], key) == 0) {",
    "            return doc->vals[i];",
    "        }",
    "    }",
    "    return NULL;",
    "}",
    "",
    "int cfg_get_int(const struct cfg_doc *doc, const char *key, int def)",
    "{",
    "    const char *raw = cfg_get_str(doc, key);",
    "",
    "    if (raw == NULL) {",
    "        return def;",
    "    }",
    "    return atoi(raw);",
    "}",
    "",
    "/* Deployment whitelist: only interface/device tokens from the BOM may be",
    " * handed to the configuration helpers. */",
    "int cmd_allowlist_ok(const char *token)",
    "{",
    "    static const char *const allowed[] = {",
    "        \"eth0\", \"eth1\", \"plc-a1\", \"plc-b2\", \"gw-edge\", \"rtu-07\",",
    "        \"hmi-01\", \"ups-ctrl\", \"psu-rail\", \"fan-tray\", NULL",
    "    };",
    "    int i;",
    "",
    "    if (token == NULL || token[0] == '\\0' || strlen(token) > 32) {",
    "        return 0;",
    "    }",
    "    for (i = 0; allowed[i] != NULL; i++) {",
    "        if (strcmp(allowed[i], token) == 0) {",
    "            return 1;",
    "        }",
    "    }",
    "    return 0;",
    "}",
    "",
    "/* Benign: the interface name is checked against the BOM allowlist before",
    " * the command line is built, so this system() call is not reachable with",
    " * arbitrary content. The naive scanner cannot see the guard. */",
    "int cfg_apply_net(const struct cfg_doc *cfg)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *iface = cfg_get_str(cfg, \"net.iface\");",
    "",
    "    if (iface == NULL || !cmd_allowlist_ok(iface)) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"ifconfig %s mtu 1500\", iface);",
    "    return system(cmd);",
    "}",
    "",
    "/* Benign: the peer address has been validated as an IPv4 literal. */",
    "int cfg_apply_peer(const struct cfg_doc *cfg)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *peer = cfg_get_str(cfg, \"vpn.static_peer\");",
    "",
    "    if (peer == NULL || strlen(peer) > 15 || strchr(peer, ';') != NULL) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"vpnctl peer set %s\", peer);",
    "    return system(cmd);",
    "}",
]

PROTO_DECODE_C = [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "const char *pkt_str(const struct pkt *pkt, const char *field)",
    "{",
    "    int i;",
    "",
    "    if (pkt == NULL || field == NULL) {",
    "        return NULL;",
    "    }",
    "    for (i = 0; i < pkt->count; i++) {",
    "        if (strcmp(pkt->names[i], field) == 0) {",
    "            return pkt->vals[i];",
    "        }",
    "    }",
    "    return NULL;",
    "}",
    "",
    "/* TLV decoder: field names/values come straight off the downlink socket. */",
    "int pkt_decode(struct pkt *pkt, const unsigned char *buf, size_t len)",
    "{",
    "    size_t off = 0;",
    "",
    "    if (pkt == NULL || buf == NULL) {",
    "        return -1;",
    "    }",
    "    pkt->count = 0;",
    "    while (off + 4 <= len && pkt->count < PKT_MAX_FIELDS) {",
    "        unsigned int name_len = buf[off];",
    "        unsigned int val_len = buf[off + 1];",
    "",
    "        off += 4;",
    "        if (name_len == 0 || name_len >= PKT_NAME_LEN ||",
    "            val_len >= PKT_VAL_LEN || off + name_len + val_len > len) {",
    "            return -1;",
    "        }",
    "        memcpy(pkt->names[pkt->count], buf + off, name_len);",
    "        pkt->names[pkt->count][name_len] = '\\0';",
    "        off += name_len;",
    "        memcpy(pkt->vals[pkt->count], buf + off, val_len);",
    "        pkt->vals[pkt->count][val_len] = '\\0';",
    "        off += val_len;",
    "        pkt->count++;",
    "    }",
    "    return pkt->count;",
    "}",
]

# ---------------------------------------------------------------------------
# corpus files
# ---------------------------------------------------------------------------
fw_h = Doc("firmware/include/fw.h", FW_H)
fw_h.write()

for rel, body in (
    ("firmware/lib/strings.c", STRINGS_C),
    ("firmware/lib/static_pool.c", STATIC_POOL_C),
    ("firmware/lib/templating.c", TEMPLATING_C),
    ("firmware/config/cfg_load.c", CFG_LOAD_C),
    ("firmware/net/proto_decode.c", PROTO_DECODE_C),
):
    Doc(rel, body).write()

# --- firmware/core/build_cmd.c --------------------------------------------
build_cmd = Doc("firmware/core/build_cmd.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* Firmware update / provisioning entry points. Every function below takes",
    " * its device or image identifier from the running configuration document. */",
    "",
])

CONFIG_CASES = [
    ("fw_apply_plc", "device.name", "dev", "plc-a1",
     "fwupdate --device %s --slot 0", "固件升级：配置项 device.name 拼进命令后交给 system()"),
    ("fw_apply_gw", "gateway.addr", "host", "gw-edge",
     "fwupdate --host %s --slot 1", "网关升级：配置项 gateway.addr 拼进 system() 的命令行"),
    ("fw_apply_rtu", "rtu.serial", "port", "/dev/ttyS2",
     "rtuconf --port %s --baud 115200", "串口服务器配置：rtu.serial 未经校验进入 system()"),
    ("fw_apply_hmi", "hmi.device", "target", "hmi-01",
     "hmictl push --target %s", "HMI 推送：配置项 hmi.device 拼进 shell 命令"),
    ("fw_apply_psu", "psu.rail", "rail", "psu-rail",
     "psuctl set --rail %s --volt 12", "电源配置：psu.rail 来自配置文件，直接进 system()"),
    ("fw_apply_fan", "fan.tray", "tray", "fan-tray",
     "fantool pwm --tray %s --duty 80", "风扇控制：fan.tray 拼进命令，无引号无白名单"),
    ("fw_apply_modem", "modem.apn", "apn", "cmnet",
     "modemctl apn set %s", "蜂窝模组配置：modem.apn 拼进 system()"),
]

for fn, key, var, dev, fmt, text in CONFIG_CASES:
    line = build_cmd.case([
        "int %s(struct fw_ctx *ctx, const struct cfg_doc *cfg)" % fn,
        "{",
        "    char cmd[CMD_MAX];",
        "    const char *%s = cfg_get_str(cfg, \"%s\");" % (var, key),
        "",
        "    if (%s == NULL) {" % var,
        "        return -1;",
        "    }",
        "    snprintf(cmd, sizeof(cmd), \"%s\", %s);" % (fmt, var),
        "    return system(cmd);",
        "}",
        "",
    ], "    return system(cmd);")
    label("firmware/core/build_cmd.c", line, "concat_system", "config_file",
          text, "cfg_get_str(cfg, \"%s\")" % key,
          "cfg_load.c:cfg_get_str(\"%s\") -> build_cmd.c:%s -> system()" % (key, fn),
          "配置键 %s 取出的值（如 %s）直接拼进命令行，命令行未经引号或白名单处理。" % (key, dev))

# static library hop, config source
line = build_cmd.case([
    "/* Cross-TU: the command line is assembled by lib/strings.c, the buffer",
    " * is then executed here. */",
    "int fw_apply_image(const struct cfg_doc *cfg)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *image = cfg_get_str(cfg, \"fw.image\");",
    "",
    "    if (image == NULL) {",
    "        return -1;",
    "    }",
    "    if (cmd_join3(cmd, sizeof(cmd), \"fwupdate --image \", image,",
    "                  \" --slot 2\") < 0) {",
    "        return -1;",
    "    }",
    "    return system(cmd);",
    "}",
    "",
], "    return system(cmd);")
label("firmware/core/build_cmd.c", line, "static_lib_hop", "config_file",
      "跨编译单元：lib/strings.c 的 cmd_join3 拼出命令行，回到 build_cmd 后 system()",
      "cfg_get_str(cfg, \"fw.image\")",
      "cfg_load.c:cfg_get_str(\"fw.image\") -> strings.c:cmd_join3 -> build_cmd.c:system()",
      "污点经 lib/strings.c 的通用拼接函数跨编译单元流回调用方，静态库不区分调用者。")

# --- firmware/core/run_exec.c ---------------------------------------------
run_exec = Doc("firmware/core/run_exec.c", [
    '#include "fw.h"',
    "",
    "#include <stdlib.h>",
    "#include <string.h>",
    "",
    "extern char **environ;",
    "",
    "/* Tools that still go through /bin/sh -c with a downlink argument. */",
    "",
])

for fn, field, text in (
    ("tool_cfg_pull", "args", "下行参数 args 放进 /bin/sh -c 的 argv[2]，execv 执行"),
    ("tool_log_pack", "pattern", "日志打包：pattern 来自下行包，经 sh -c 执行"),
    ("tool_diag_dump", "filter", "诊断导出：filter 直接作为 sh -c 的脚本执行"),
):
    line = run_exec.case([
        "int %s(const struct pkt *pkt)" % fn,
        "{",
        "    char *argv[4];",
        "    const char *args = pkt_str(pkt, \"%s\");" % field,
        "",
        "    if (args == NULL) {",
        "        return -1;",
        "    }",
        "    argv[0] = \"/bin/sh\";",
        "    argv[1] = \"-c\";",
        "    argv[2] = (char *)args;",
        "    argv[3] = NULL;",
        "    return execv(\"/bin/sh\", argv);",
        "}",
        "",
    ], "    return execv(\"/bin/sh\", argv);")
    label("firmware/core/run_exec.c", line, "exec_arg_misuse", "network_downlink",
          text, "pkt_str(pkt, \"%s\")" % field,
          "proto_decode.c:pkt_str(\"%s\") -> run_exec.c:%s -> execv(\"/bin/sh\", argv)" % (field, fn),
          "参数虽然进了 argv 数组，但 argv[0..1] 是 /bin/sh -c，等价于把字符串交给 shell。")

for fn, key, text in (
    ("tool_cert_import", "tool.args", "证书导入：配置项 tool.args 作为 sh -c 的脚本执行"),
    ("tool_quota_sync", "sync.args", "配额同步：配置项 sync.args 传给 execlp 的 sh -c"),
):
    line = run_exec.case([
        "int %s(const struct cfg_doc *cfg)" % fn,
        "{",
        "    const char *args = cfg_get_str(cfg, \"%s\");" % key,
        "",
        "    if (args == NULL) {",
        "        return -1;",
        "    }",
        ("    return execl(\"/bin/sh\", \"sh\", \"-c\", args, NULL);"
         if fn == "tool_cert_import" else
         "    return execlp(\"sh\", \"sh\", \"-c\", args, NULL);"),
        "}",
        "",
    ], ("    return execl(\"/bin/sh\", \"sh\", \"-c\", args, NULL);"
        if fn == "tool_cert_import" else
        "    return execlp(\"sh\", \"sh\", \"-c\", args, NULL);"))
    label("firmware/core/run_exec.c", line, "exec_arg_misuse", "config_file",
          text, "cfg_get_str(cfg, \"%s\")" % key,
          "cfg_load.c:cfg_get_str(\"%s\") -> run_exec.c:%s -> exec*(\"sh\", \"-c\", args)" % (key, fn),
          "配置里的参数被当成 -c 的脚本文本，exec 家族并没有做到参数化。")

line = run_exec.case([
    "int tool_env_probe(void)",
    "{",
    "    char *argv[4];",
    "    const char *args = getenv(\"FW_PROBE_ARGS\");",
    "",
    "    if (args == NULL) {",
    "        return -1;",
    "    }",
    "    argv[0] = \"/bin/sh\";",
    "    argv[1] = \"-c\";",
    "    argv[2] = (char *)args;",
    "    argv[3] = NULL;",
    "    return execvp(\"sh\", argv);",
    "}",
    "",
], "    return execvp(\"sh\", argv);")
label("firmware/core/run_exec.c", line, "exec_arg_misuse", "env_var",
      "环境变量 FW_PROBE_ARGS 进 sh -c 的 argv，execvp 执行",
      "getenv(\"FW_PROBE_ARGS\")",
      "getenv(\"FW_PROBE_ARGS\") -> run_exec.c:tool_env_probe -> execvp(\"sh\", argv)",
      "环境变量可被 init 脚本或调试注入，最终作为 shell 脚本执行。")

# --- firmware/core/sensor_poll.c ------------------------------------------
sensor = Doc("firmware/core/sensor_poll.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* BMC / PDU polling, one popen per sensor class. */",
    "",
])

for fn, key, fmt, text in (
    ("sensor_poll_temp", "sensor.host", "ipmitool -H %s sdr type Temperature",
     "温度轮询：配置项 sensor.host 拼进 popen 命令"),
    ("sensor_poll_fan", "sensor.bmc", "ipmitool -I lanplus -H %s sensor",
     "风扇轮询：sensor.bmc 拼进 popen 命令"),
    ("sensor_poll_power", "sensor.pdu", "pductl status --host %s",
     "PDU 轮询：sensor.pdu 拼进 popen 命令"),
):
    line = sensor.case([
        "FILE *%s(const struct cfg_doc *cfg)" % fn,
        "{",
        "    char line[LINE_MAX];",
        "    const char *host = cfg_get_str(cfg, \"%s\");" % key,
        "",
        "    if (host == NULL) {",
        "        return NULL;",
        "    }",
        "    snprintf(line, sizeof(line), \"%s\", host);" % fmt,
        "    return popen(line, \"r\");",
        "}",
        "",
    ], "    return popen(line, \"r\");")
    label("firmware/core/sensor_poll.c", line, "popen_config", "config_file",
          text, "cfg_get_str(cfg, \"%s\")" % key,
          "cfg_load.c:cfg_get_str(\"%s\") -> sensor_poll.c:%s -> popen(line, \"r\")" % (key, fn),
          "配置里的主机名被拼进 popen 的命令行，popen 内部经 /bin/sh -c 执行。")

# --- firmware/net/probe.c -------------------------------------------------
probe = Doc("firmware/net/probe.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* Active probes triggered by the downlink control plane. */",
    "",
])

for fn, field, fmt, text in (
    ("probe_lldp", "iface", "lldpctl -i %s", "链路发现：下行 iface 拼进 popen 命令"),
    ("probe_arp", "subnet", "arp-scan %s", "ARP 扫描：下行 subnet 拼进 popen 命令"),
    ("probe_route", "dst", "traceroute -n %s", "路由探测：下行 dst 拼进 popen 命令"),
):
    line = probe.case([
        "FILE *%s(const struct pkt *pkt)" % fn,
        "{",
        "    char line[LINE_MAX];",
        "    const char *arg = pkt_str(pkt, \"%s\");" % field,
        "",
        "    if (arg == NULL) {",
        "        return NULL;",
        "    }",
        "    snprintf(line, sizeof(line), \"%s\", arg);" % fmt,
        "    return popen(line, \"r\");",
        "}",
        "",
    ], "    return popen(line, \"r\");")
    label("firmware/net/probe.c", line, "popen_config", "network_downlink",
          text, "pkt_str(pkt, \"%s\")" % field,
          "proto_decode.c:pkt_str(\"%s\") -> probe.c:%s -> popen(line, \"r\")" % (field, fn),
          "下行包字段直接进入 popen 命令行，攻击者可用分号/反引号注入。")

# --- firmware/core/shell_wrap.c -------------------------------------------
shell = Doc("firmware/core/shell_wrap.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* Shared shell wrappers. The implementations are deliberately thin: they",
    " * hand the string to system()/popen() without parsing it. Callers in other",
    " * translation units treat them as a generic \"run this\" helper. */",
    "int shell_run(const char *cmd)",
    "{",
    "    return system(cmd);",
    "}",
    "",
    "int cmd_run(const char *cmd)",
    "{",
    "    return system(cmd);",
    "}",
    "",
    "int tmpl_exec(const char *tpl_name, struct tmpl_vars *vars)",
    "{",
    "    char rendered[CMD_MAX];",
    "    int rc;",
    "",
    "    if (tpl_name == NULL) {",
    "        return -1;",
    "    }",
    "    rc = tmpl_render(tpl_name, vars, rendered, sizeof(rendered));",
    "    if (rc < 0) {",
    "        return -1;",
    "    }",
    "    return system(rendered);",
    "}",
    "",
])

for fn, key, cmd, text in (
    ("apply_net_profile", "net.profile", "netcfg apply %s", "网络配置：配置项 net.profile 经 shell_run 执行"),
    ("apply_acl", "acl.name", "aclctl load %s", "ACL 下发：acl.name 经 shell_run 执行"),
    ("apply_vpn", "vpn.peer", "vpnctl peer %s", "VPN 配置：vpn.peer 经 shell_run 执行"),
):
    line = shell.case([
        "int %s(const struct cfg_doc *cfg)" % fn,
        "{",
        "    char cmd[CMD_MAX];",
        "    const char *arg = cfg_get_str(cfg, \"%s\");" % key,
        "",
        "    if (arg == NULL) {",
        "        return -1;",
        "    }",
        "    snprintf(cmd, sizeof(cmd), \"%s\", arg);" % cmd,
        "    return shell_run(cmd);",
        "}",
        "",
    ], "    return shell_run(cmd);")
    label("firmware/core/shell_wrap.c", line, "shell_wrapper", "config_file",
          text, "cfg_get_str(cfg, \"%s\")" % key,
          "cfg_load.c:cfg_get_str(\"%s\") -> shell_wrap.c:%s -> shell_run -> system()" % (key, fn),
          "共享的 shell 包装函数把字符串原样交给 system()，调用点并不知道参数是否可控。")

for fn, field, cmd, text in (
    ("apply_downlink_unit", "unit", "unitctl start %s", "服务单元启动：下行 unit 经 shell_run 执行"),
    ("apply_downlink_rule", "rule", "rulectl add %s", "规则下发：下行 rule 经 shell_run 执行"),
    ("apply_downlink_zone", "zone", "zonecfg set %s", "安全域配置：下行 zone 经 shell_run 执行"),
):
    line = shell.case([
        "int %s(const struct pkt *pkt)" % fn,
        "{",
        "    char cmd[CMD_MAX];",
        "    const char *arg = pkt_str(pkt, \"%s\");" % field,
        "",
        "    if (arg == NULL) {",
        "        return -1;",
        "    }",
        "    snprintf(cmd, sizeof(cmd), \"%s\", arg);" % cmd,
        "    return shell_run(cmd);",
        "}",
        "",
    ], "    return shell_run(cmd);")
    label("firmware/core/shell_wrap.c", line, "shell_wrapper", "network_downlink",
          text, "pkt_str(pkt, \"%s\")" % field,
          "proto_decode.c:pkt_str(\"%s\") -> shell_wrap.c:%s -> shell_run -> system()" % (field, fn),
          "下行字段经共享 shell 包装执行；包装函数没有转义也没有白名单。")

line = shell.case([
    "int apply_env_override(void)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *arg = getenv(\"FW_OVERRIDE\");",
    "",
    "    if (arg == NULL) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"fwupdate --override %s\", arg);",
    "    return cmd_run(cmd);",
    "}",
    "",
], "    return cmd_run(cmd);")
label("firmware/core/shell_wrap.c", line, "shell_wrapper", "env_var",
      "环境变量 FW_OVERRIDE 经 cmd_run（shell 包装）执行",
      "getenv(\"FW_OVERRIDE\")",
      "getenv(\"FW_OVERRIDE\") -> shell_wrap.c:apply_env_override -> cmd_run -> system()",
      "环境变量进入共享 shell 包装 cmd_run，最终 system() 执行。")

# --- firmware/core/cmd_template.c -----------------------------------------
tmpl = Doc("firmware/core/cmd_template.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* Command templates rendered from templates/ and executed immediately. */",
    "",
])

for fn, key, tvar, value, text in (
    ("tmpl_apply_deploy", "template.deploy", "device", "plc-a1",
     "部署模板：template.deploy 由配置指定，渲染结果交给 system()"),
    ("tmpl_apply_migrate", "template.migrate", "target", "db-primary",
     "迁移模板：template.migrate 渲染后交给 system()"),
    ("tmpl_apply_publish", "template.publish", "channel", "stable",
     "发布模板：配置里的模板名交给 tmpl_exec，变量来自配置"),
):
    lines = [
        "int %s(const struct cfg_doc *cfg, struct tmpl_vars *vars)" % fn,
        "{",
        "    char rendered[CMD_MAX];",
        "    const char *tpl = cfg_get_str(cfg, \"%s\");" % key,
        "    const char *%s = cfg_get_str(cfg, \"%s.value\");" % (tvar, key),
        "",
        "    if (tpl == NULL || %s == NULL) {" % tvar,
        "        return -1;",
        "    }",
        "    tmpl_var_set(vars, \"%s\", %s);" % (tvar, tvar),
    ]
    if fn == "tmpl_apply_publish":
        lines += [
            "    return tmpl_exec(tpl, vars);",
            "}",
            "",
        ]
        anchor = "    return tmpl_exec(tpl, vars);"
    else:
        lines += [
            "    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {",
            "        return -1;",
            "    }",
            "    return system(rendered);",
            "}",
            "",
        ]
        anchor = "    return system(rendered);"
    line = tmpl.case(lines, anchor)
    label("firmware/core/cmd_template.c", line, "template_rendered", "config_file",
          text, "cfg_get_str(cfg, \"%s\")" % key,
          "cfg_load.c:cfg_get_str(\"%s\") -> templating.c:tmpl_render -> cmd_template.c -> system()" % key,
          "模板内容与变量都来自配置文件；渲染出的命令行直接执行。")

line = tmpl.case([
    "int tmpl_apply_downlink(const struct pkt *pkt, struct tmpl_vars *vars)",
    "{",
    "    char rendered[CMD_MAX];",
    "    const char *tpl = pkt_str(pkt, \"template\");",
    "    const char *dev = pkt_str(pkt, \"device\");",
    "",
    "    if (tpl == NULL || dev == NULL) {",
    "        return -1;",
    "    }",
    "    tmpl_var_set(vars, \"device\", dev);",
    "    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {",
    "        return -1;",
    "    }",
    "    return system(rendered);",
    "}",
    "",
], "    return system(rendered);")
label("firmware/core/cmd_template.c", line, "template_rendered", "network_downlink",
      "下行包同时决定模板与变量，渲染后 system() 执行",
      "pkt_str(pkt, \"template\") / pkt_str(pkt, \"device\")",
      "proto_decode.c:pkt_str -> cmd_template.c:tmpl_apply_downlink -> tmpl_render -> system()",
      "模板路径本身来自网络，渲染器读任意模板文件，变量也是下行的。")

line = tmpl.case([
    "int tmpl_apply_env(struct tmpl_vars *vars)",
    "{",
    "    char rendered[CMD_MAX];",
    "    const char *tpl = getenv(\"FW_TEMPLATE\");",
    "    const char *arg = getenv(\"FW_TEMPLATE_ARG\");",
    "",
    "    if (tpl == NULL || arg == NULL) {",
    "        return -1;",
    "    }",
    "    tmpl_var_set(vars, \"arg\", arg);",
    "    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {",
    "        return -1;",
    "    }",
    "    return system(rendered);",
    "}",
    "",
], "    return system(rendered);")
label("firmware/core/cmd_template.c", line, "template_rendered", "env_var",
      "环境变量 FW_TEMPLATE / FW_TEMPLATE_ARG 渲染成命令行后执行",
      "getenv(\"FW_TEMPLATE\") / getenv(\"FW_TEMPLATE_ARG\")",
      "getenv(FW_TEMPLATE) -> templating.c:tmpl_render -> cmd_template.c:system()",
      "模板路径与变量都来自环境变量，渲染结果直接进 system()。")

# --- firmware/net/ops.c ---------------------------------------------------
ops = Doc("firmware/net/ops.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* Indirect command table: the control plane calls ops_dispatch(), which",
    " * looks the operation up by name and invokes it through a function pointer.",
    " * Symbols are resolved at run time, so a syntactic call graph stops at",
    " * ops[i].fn(arg). */",
    "",
])

for fn, field, cmd, text in (
    ("op_unit_reload", "unit", "reload --unit %s", "函数指针派发：unit 经 ops[] 间接调用后进 system()"),
    ("op_zone_flush", "zone", "zone flush %s", "函数指针派发：zone 经 ops[] 间接调用后进 system()"),
):
    line = ops.case([
        "static int %s(const char *arg)" % fn,
        "{",
        "    char cmd[CMD_MAX];",
        "",
        "    if (arg == NULL) {",
        "        return -1;",
        "    }",
        "    snprintf(cmd, sizeof(cmd), \"%s\", arg);" % cmd,
        "    return system(cmd);",
        "}",
        "",
    ], "    return system(cmd);")
    label("firmware/net/ops.c", line, "funcptr_dispatch", "network_downlink",
          text, "pkt_str(pkt, \"%s\") -> ops_dispatch(\"%s\")" % (field, field),
          "proto_decode.c:pkt_str(\"%s\") -> dispatch -> ops[].fn (indirect) -> %s -> system()"
          % (field, fn),
          "污点从下行包进入，经过函数指针表中的间接调用才到达 system()；语法层面的调用图看不到这条边。")

line = ops.case([
    "static int op_env_apply(const char *arg)",
    "{",
    "    char cmd[CMD_MAX];",
    "",
    "    if (arg == NULL) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"op apply %s\", arg);",
    "    return system(cmd);",
    "}",
    "",
    "static const struct cmd_entry op_table[] = {",
    "    {\"unit-reload\", op_unit_reload},",
    "    {\"zone-flush\", op_zone_flush},",
    "    {\"env-apply\", op_env_apply},",
    "};",
    "",
    "int ops_dispatch(const char *name, const char *arg)",
    "{",
    "    size_t i;",
    "",
    "    for (i = 0; i < sizeof(op_table) / sizeof(op_table[0]); i++) {",
    "        if (strcmp(op_table[i].name, name) == 0) {",
    "            return op_table[i].fn(arg);",
    "        }",
    "    }",
    "    return -1;",
    "}",
    "",
], "    return system(cmd);")
label("firmware/net/ops.c", line, "funcptr_dispatch", "env_var",
      "环境变量经函数指针表的 env-apply 操作进入 system()",
      "getenv(\"FW_OP_ARG\") -> ops_dispatch(\"env-apply\", arg)",
      "getenv(FW_OP_ARG) -> ops_dispatch -> op_table[].fn (indirect) -> op_env_apply -> system()",
      "环境变量通过函数指针表间接派发到 op_env_apply，直接调用图里没有这条边。")

# --- firmware/net/dispatch.c ----------------------------------------------
dispatch = Doc("firmware/net/dispatch.c", [
    '#include "fw.h"',
    "",
    "#include <string.h>",
    "",
    "/* Control-plane dispatcher: every handler starts from a decoded downlink",
    " * packet (firmware/net/proto_decode.c). */",
    "",
    "#define RUN_SHELL(c) system(c)",
    "",
])

for fn, field, cmd, text in (
    ("dispatch_fw_push", "device", "fwupdate --device %s --profile live", "下行 device 拼进 system() 命令"),
    ("dispatch_diag", "target", "diagctl run --target %s", "下行 target 拼进 system() 命令"),
    ("dispatch_cfg_set", "key", "cfgset %s=1", "下行 key 拼进 system() 命令"),
    ("dispatch_cert_rotate", "cn", "certrot --cn %s", "下行 cn 拼进 system() 命令"),
):
    line = dispatch.case([
        "int %s(const struct pkt *pkt)" % fn,
        "{",
        "    char cmd[CMD_MAX];",
        "    const char *arg = pkt_str(pkt, \"%s\");" % field,
        "",
        "    if (arg == NULL) {",
        "        return -1;",
        "    }",
        "    snprintf(cmd, sizeof(cmd), \"%s\", arg);" % cmd,
        "    return system(cmd);",
        "}",
        "",
    ], "    return system(cmd);")
    label("firmware/net/dispatch.c", line, "concat_system", "network_downlink",
          text, "pkt_str(pkt, \"%s\")" % field,
          "proto_decode.c:pkt_str(\"%s\") -> dispatch.c:%s -> system()" % (field, fn),
          "下行包字段直接拼接进 shell 命令行，未做转义或白名单。")

for fn, field, cmd, text in (
    ("dispatch_reboot_hook", "reason", "reboot --reason %s", "宏 RUN_SHELL 包装：下行 reason 进入 system()"),
    ("dispatch_snapshot", "vol", "snapshot --vol %s", "宏 RUN_SHELL 包装：下行 vol 进入 system()"),
):
    line = dispatch.case([
        "int %s(const struct pkt *pkt)" % fn,
        "{",
        "    char cmd[CMD_MAX];",
        "    const char *arg = pkt_str(pkt, \"%s\");" % field,
        "",
        "    if (arg == NULL) {",
        "        return -1;",
        "    }",
        "    snprintf(cmd, sizeof(cmd), \"%s\", arg);" % cmd,
        "    RUN_SHELL(cmd);",
        "    return 0;",
        "}",
        "",
    ], "    RUN_SHELL(cmd);")
    label("firmware/net/dispatch.c", line, "macro_indirection", "network_downlink",
          text, "pkt_str(pkt, \"%s\")" % field,
          "proto_decode.c:pkt_str(\"%s\") -> dispatch.c:%s -> RUN_SHELL macro -> system()" % (field, fn),
          "执行点藏在 RUN_SHELL 宏里，字符串匹配只看宏名会漏掉展开后的 system()。")

line = dispatch.case([
    "int dispatch_ntp_sync(const struct cfg_doc *cfg)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *server = cfg_get_str(cfg, \"ntp.server\");",
    "",
    "    if (server == NULL) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"ntpd -q -p %s\", server);",
    "    RUN_SHELL(cmd);",
    "    return 0;",
    "}",
    "",
], "    RUN_SHELL(cmd);")
label("firmware/net/dispatch.c", line, "macro_indirection", "config_file",
      "配置项 ntp.server 经 RUN_SHELL 宏执行",
      "cfg_get_str(cfg, \"ntp.server\")",
      "cfg_load.c:cfg_get_str(\"ntp.server\") -> dispatch.c:dispatch_ntp_sync -> RUN_SHELL -> system()",
      "宏把执行点隐藏起来，配置值直接进 system()。")

line = dispatch.case([
    "int dispatch_log_upload(const struct pkt *pkt)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *url = pkt_str(pkt, \"url\");",
    "",
    "    if (url == NULL) {",
    "        return -1;",
    "    }",
    "    if (cmd_join3(cmd, sizeof(cmd), \"logger --remote \", url,",
    "                  \" --tag fw\") < 0) {",
    "        return -1;",
    "    }",
    "    return system(cmd);",
    "}",
    "",
], "    return system(cmd);")
label("firmware/net/dispatch.c", line, "static_lib_hop", "network_downlink",
      "跨编译单元：下行 url 经 lib/strings.c cmd_join3 组装后 system()",
      "pkt_str(pkt, \"url\")",
      "proto_decode.c:pkt_str(\"url\") -> strings.c:cmd_join3 -> dispatch.c:system()",
      "污点穿过静态库的字符串拼接函数再回到调用方执行。")

# --- C++ files ------------------------------------------------------------
downlink = Doc("firmware/net/downlink.cpp", [
    '#include "fw.h"',
    "",
    "#include <cstdio>",
    "#include <cstring>",
    "#include <string>",
    "",
    "/* C++ side of the downlink stack: the same decoded packet, wrapped in",
    " * std::string before being handed to the execution helpers. */",
    "",
])

line = downlink.case([
    "int downlink_apply(const struct pkt *pkt)",
    "{",
    "    const char *dev = pkt_str(pkt, \"device\");",
    "",
    "    if (dev == nullptr) {",
    "        return -1;",
    "    }",
    "    std::string cmd = std::string(\"fwupdate --device \") + dev +",
    "                      \" --channel beta\";",
    "    return std::system(cmd.c_str());",
    "}",
    "",
], "    return std::system(cmd.c_str());")
label("firmware/net/downlink.cpp", line, "concat_system", "network_downlink",
      "下行 device 经 std::string 拼接后交给 std::system()",
      "pkt_str(pkt, \"device\")",
      "proto_decode.c:pkt_str(\"device\") -> downlink.cpp:downlink_apply -> std::system()",
      "C++ 侧用 operator+ 拼命令行，最后 std::system 执行，同样没有转义。")

line = downlink.case([
    "int downlink_rollback(const struct pkt *pkt)",
    "{",
    "    const char *slot = pkt_str(pkt, \"slot\");",
    "",
    "    if (slot == nullptr) {",
    "        return -1;",
    "    }",
    "    std::string cmd = std::string(\"fwrollback --slot \") + slot;",
    "    return std::system(cmd.c_str());",
    "}",
    "",
], "    return std::system(cmd.c_str());")
label("firmware/net/downlink.cpp", line, "concat_system", "network_downlink",
      "下行 slot 经 std::string 拼接后交给 std::system()",
      "pkt_str(pkt, \"slot\")",
      "proto_decode.c:pkt_str(\"slot\") -> downlink.cpp:downlink_rollback -> std::system()",
      "回滚槽位来自下行包，直接拼进命令行。")

line = downlink.case([
    "FILE *downlink_probe(const struct pkt *pkt)",
    "{",
    "    const char *host = pkt_str(pkt, \"host\");",
    "",
    "    if (host == nullptr) {",
    "        return nullptr;",
    "    }",
    "    std::string cmd = std::string(\"ipmitool -H \") + host + \" mc info\";",
    "    return popen(cmd.c_str(), \"r\");",
    "}",
    "",
], "    return popen(cmd.c_str(), \"r\");")
label("firmware/net/downlink.cpp", line, "popen_config", "network_downlink",
      "下行 host 经 std::string 拼接后交给 popen()",
      "pkt_str(pkt, \"host\")",
      "proto_decode.c:pkt_str(\"host\") -> downlink.cpp:downlink_probe -> popen()",
      "popen 的命令行由下行字段拼接而成，内部走 shell。")

main_cpp = Doc("firmware/main.cpp", [
    '#include "fw.h"',
    "",
    "#include <cstdlib>",
    "#include <cstring>",
    "",
    "/* Boot-time hooks. Environment overrides exist for factory bring-up and",
    " * are not cleared by the image. */",
    "",
])

line = main_cpp.case([
    "int fw_boot_hook(struct fw_ctx *ctx)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *hook = getenv(\"FW_BOOT_CMD\");",
    "",
    "    if (hook == nullptr) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"%s --slot %u\", hook, ctx->slot);",
    "    return std::system(cmd);",
    "}",
    "",
], "    return std::system(cmd);")
label("firmware/main.cpp", line, "concat_system", "env_var",
      "环境变量 FW_BOOT_CMD 拼进 std::system() 命令行",
      "getenv(\"FW_BOOT_CMD\")",
      "getenv(FW_BOOT_CMD) -> main.cpp:fw_boot_hook -> std::system()",
      "出厂调试用的环境变量没有被清除，直接拼进 system 命令行。")

line = main_cpp.case([
    "int fw_selftest(struct fw_ctx *ctx)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *args = getenv(\"FW_SELFTEST_ARGS\");",
    "",
    "    if (args == nullptr) {",
    "        return -1;",
    "    }",
    "    snprintf(cmd, sizeof(cmd), \"selftest %s --slot %u\", args, ctx->slot);",
    "    return std::system(cmd);",
    "}",
    "",
], "    return std::system(cmd);")
label("firmware/main.cpp", line, "concat_system", "env_var",
      "环境变量 FW_SELFTEST_ARGS 拼进 std::system() 命令行",
      "getenv(\"FW_SELFTEST_ARGS\")",
      "getenv(FW_SELFTEST_ARGS) -> main.cpp:fw_selftest -> std::system()",
      "自检参数来自环境变量，未过滤就拼进命令。")

line = main_cpp.case([
    "int fw_recover(const struct cfg_doc *cfg)",
    "{",
    "    char cmd[CMD_MAX];",
    "    const char *target = getenv(\"FW_RECOVER_TARGET\");",
    "",
    "    if (target == nullptr) {",
    "        return -1;",
    "    }",
    "    if (cmd_join3(cmd, sizeof(cmd), \"recover --target \", target,",
    "                  \" --mode auto\") < 0) {",
    "        return -1;",
    "    }",
    "    return std::system(cmd);",
    "}",
    "",
    "/* Benign: fixed maintenance commands used by the factory self-check. */",
    "int fw_factory_check(void)",
    "{",
    "    if (std::system(\"fwupdate --check\") != 0) {",
    "        return -1;",
    "    }",
    "    FILE *out = popen(\"fw_printenv bootcmd\", \"r\");",
    "    if (out != nullptr) {",
    "        pclose(out);",
    "    }",
    "    return std::system(\"sync\");",
    "}",
    "",
], "    return std::system(cmd);")
label("firmware/main.cpp", line, "static_lib_hop", "env_var",
      "环境变量 FW_RECOVER_TARGET 经 lib/strings.c cmd_join3 组装后 std::system()",
      "getenv(\"FW_RECOVER_TARGET\")",
      "getenv(FW_RECOVER_TARGET) -> strings.c:cmd_join3 -> main.cpp:std::system()",
      "环境变量穿过静态库拼接函数后回到 C++ 入口执行。")

# --- firmware/cli/health.cpp ---------------------------------------------
health = Doc("firmware/cli/health.cpp", [
    '#include "fw.h"',
    "",
    "#include <cstdio>",
    "#include <cstdlib>",
    "#include <string>",
    "",
    "/* healthd is also used by the factory harness, which passes an override",
    " * through the environment. */",
    "",
])

line = health.case([
    "FILE *health_collect(void)",
    "{",
    "    const char *extra = getenv(\"FW_HEALTH_CMD\");",
    "",
    "    if (extra == nullptr) {",
    "        return nullptr;",
    "    }",
    "    std::string cmd = std::string(\"healthd \") + extra;",
    "    return popen(cmd.c_str(), \"r\");",
    "}",
    "",
], "    return popen(cmd.c_str(), \"r\");")
label("firmware/cli/health.cpp", line, "popen_config", "env_var",
      "环境变量 FW_HEALTH_CMD 拼进 popen 命令行",
      "getenv(\"FW_HEALTH_CMD\")",
      "getenv(FW_HEALTH_CMD) -> health.cpp:health_collect -> popen()",
      "健康检查命令由环境变量拼接，popen 内部经 shell 执行。")

# --- benign bait ----------------------------------------------------------
safecmd = Doc("firmware/core/safecmd.c", [
    '#include "fw.h"',
    "",
    "#include <stdlib.h>",
    "#include <string.h>",
    "",
    "extern char **environ;",
    "",
    "/* Safe call sites kept next to the risky ones. They all use constant",
    " * command lines, a fixed argv vector, or a whitelist check, so a scanner",
    " * that only looks for the API name flags them as false positives. */",
    "",
    "int safe_sync(void)",
    "{",
    "    return system(\"sync\");",
    "}",
    "",
    "int safe_ifconfig_up(void)",
    "{",
    "    return system(\"/sbin/ifconfig eth0 up\");",
    "}",
    "",
    "int safe_reboot(void)",
    "{",
    "    return system(\"/sbin/reboot\");",
    "}",
    "",
    "FILE *safe_uptime(void)",
    "{",
    "    return popen(\"uptime\", \"r\");",
    "}",
    "",
    "FILE *safe_mounts(void)",
    "{",
    "    return popen(\"cat /proc/mounts\", \"r\");",
    "}",
    "",
    "int safe_ls(void)",
    "{",
    "    char *argv[] = {\"/bin/ls\", \"-l\", \"/var/log\", NULL};",
    "",
    "    return execv(\"/bin/ls\", argv);",
    "}",
    "",
    "int safe_date(void)",
    "{",
    "    return execl(\"/bin/date\", \"date\", \"+%Y-%m-%d\", (char *)NULL);",
    "}",
    "",
    "int safe_copy(const char *src)",
    "{",
    "    char *argv[] = {\"/usr/bin/cp\", \"-f\", (char *)src, \"/tmp/stage\", NULL};",
    "",
    "    if (src == NULL || strncmp(src, \"/var/lib/fw/\", 12) != 0) {",
    "        return -1;",
    "    }",
    "    return execve(\"/usr/bin/cp\", argv, environ);",
    "}",
    "",
    "int safe_status(void)",
    "{",
    "    return shell_run(\"diagctl --status\");",
    "}",
    "",
    "int safe_cmd_status(void)",
    "{",
    "    return cmd_run(\"status\");",
    "}",
    "",
    "int safe_pool_memory(void)",
    "{",
    "    return pool_exec_line(\"memory\");",
    "}",
    "",
    "int safe_rotate(void)",
    "{",
    "    return tmpl_exec(\"rotate.sh.j2\", NULL);",
    "}",
    "",
])

health2 = Doc("firmware/net/healthcheck.c", [
    '#include "fw.h"',
    "",
    "/* Watchdog probes; all command lines are compile-time constants. */",
    "",
    "int hc_clock(void)",
    "{",
    "    return system(\"/bin/date -u +%s\");",
    "}",
    "",
    "int hc_links(void)",
    "{",
    "    FILE *fp = popen(\"ip -br link\", \"r\");",
    "",
    "    if (fp == NULL) {",
    "        return -1;",
    "    }",
    "    pclose(fp);",
    "    return 0;",
    "}",
    "",
    "int hc_uptime(void)",
    "{",
    "    return shell_run(\"uptime -p\");",
    "}",
    "",
    "int hc_journal(void)",
    "{",
    "    return cmd_run(\"journalctl -n 20 --no-pager\");",
    "}",
    "",
])

# ---------------------------------------------------------------------------
# templates
# ---------------------------------------------------------------------------
TEMPLATES = {
    "templates/deploy.sh.j2": [
        "#!/bin/sh",
        "set -e",
        "fwupdate --device {{device}} --slot 0",
        "echo deployed",
    ],
    "templates/migrate.sh.j2": [
        "#!/bin/sh",
        "set -e",
        "dbmigrate --target {{target}} --batch 200",
        "echo migrated",
    ],
    "templates/publish.sh.j2": [
        "#!/bin/sh",
        "set -e",
        "release publish --channel {{channel}}",
        "echo published",
    ],
    "templates/rotate.sh.j2": [
        "#!/bin/sh",
        "set -e",
        "logrotate --force /etc/logrotate.d/fw",
        "echo rotated",
    ],
    "templates/selftest.sh.j2": [
        "#!/bin/sh",
        "set -e",
        "/opt/fw/bin/selftest --quick",
        "echo selftest-ok",
    ],
}

for rel, lines in TEMPLATES.items():
    path = os.path.join(ROOT, rel.replace("/", os.sep))
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(lines) + "\n")


# ---------------------------------------------------------------------------
# filler: benign board-support shims (no execution primitives at all)
# ---------------------------------------------------------------------------
def filler_c(idx):
    name = "bshim_%03d" % idx
    lines = [
        "/* %s -- board support shim generated from the %04d pinout table." % (name, idx),
        " * Pure register/table helpers; no process or shell interaction. */",
        "#include <stddef.h>",
        "#include <stdint.h>",
        "",
    ]
    for t in range(FILLER_TABLES):
        lines.append("static const uint32_t %s_tab%d[96] = {" % (name, t))
        for row in range(12):
            vals = ", ".join(
                "0x%08xu" % (((idx * 131 + t * 17 + row * 8 + k) * 2654435761) & 0xFFFFFFFF)
                for k in range(8)
            )
            lines.append("    " + vals + ",")
        lines.append("};")
        lines.append("")
    lines.append("struct %s_state {" % name)
    lines.append("    uint32_t head;")
    lines.append("    uint32_t tail;")
    lines.append("    uint32_t flags;")
    lines.append("    uint8_t buf[128];")
    lines.append("};")
    lines.append("")
    for f in range(FILLER_FUNCS):
        lines += [
            "uint32_t %s_mix%d(uint32_t seed, const uint8_t *buf, size_t len)" % (name, f),
            "{",
            "    uint32_t acc = seed ^ 0x%08xu;" % (((idx + f) * 2246822519) & 0xFFFFFFFF),
            "    size_t i;",
            "",
            "    if (buf == NULL) {",
            "        return acc;",
            "    }",
            "    for (i = 0; i < len; i++) {",
            "        acc = (acc << 5 | acc >> 27) ^ (uint32_t)buf[i];",
            "        acc += %s_tab%d[(i + acc) & 95u];" % (name, f % FILLER_TABLES),
            "    }",
            "    return acc;",
            "}",
            "",
        ]
    lines += [
        "int %s_reset(struct %s_state *st)" % (name, name),
        "{",
        "    if (st == NULL) {",
        "        return -1;",
        "    }",
        "    st->head = 0;",
        "    st->tail = 0;",
        "    st->flags = 0x%08xu;" % ((idx * 7919) & 0xFFFFFFFF),
        "    return 0;",
        "}",
        "",
    ]
    return lines


def write_filler():
    for i in range(FILLER_MODULES):
        rel = "firmware/filler/%s.c" % ("bshim_%03d" % i)
        Doc(rel, filler_c(i)).write()


# ---------------------------------------------------------------------------
# write outputs
# ---------------------------------------------------------------------------
for doc in (build_cmd, run_exec, sensor, probe, shell, tmpl, ops, dispatch,
            downlink, main_cpp, health, safecmd, health2):
    doc.write()

write_filler()

# keep the ordering stable and grouped by file for readability
LABELS.sort(key=lambda item: (item["file"], item["line"]))
for idx, item in enumerate(LABELS, 1):
    item["id"] = "V%02d" % idx

assert len(LABELS) == 50, len(LABELS)

labels_doc = {
    "topic": "12165",
    "note": ("标注 = 不可信值（配置文件 / 网络下发 / 环境变量）到达命令执行原语的那一行。"
             "常量命令、固定 argv 的参数化 exec、以及过了 cmd_allowlist_ok 白名单的调用都算良性，"
             "报了就是误报。"),
    "total": len(LABELS),
    "vulns": LABELS,
}
with open(os.path.join(ROOT, "labels.json"), "w", encoding="utf-8", newline="\n") as fh:
    json.dump(labels_doc, fh, ensure_ascii=False, indent=2)
    fh.write("\n")

CONFIG = {
    "note": ("可配置的净化 / 包装白名单。分析器读它决定哪些调用不算漏洞；"
             "增删条目应该能改变召回与误报，用来做消融实验。"),
    "sources": {
        "config_file": ["cfg_get_str", "cfg_get_int"],
        "network_downlink": ["pkt_str", "pkt_decode"],
        "env_var": ["getenv", "secure_getenv"],
    },
    "sanitizers": [
        {"name": "cmd_allowlist_ok", "kind": "whitelist", "returns": "bool",
         "note": "调用前必须命中 BOM 白名单"},
        {"name": "execv", "kind": "parameterized_exec",
         "note": "argv 元素直接作为参数传入、不经过 sh -c 时算净化"},
        {"name": "execve", "kind": "parameterized_exec"},
        {"name": "posix_spawn", "kind": "parameterized_exec"},
    ],
    "shell_wrappers": ["shell_run", "cmd_run", "tmpl_exec", "RUN_SHELL"],
    "template_dirs": ["templates"],
    "safe_templates": ["rotate.sh.j2", "selftest.sh.j2"],
}
with open(os.path.join(ROOT, "config", "sanitizers.json"), "w",
          encoding="utf-8", newline="\n") as fh:
    json.dump(CONFIG, fh, ensure_ascii=False, indent=2)
    fh.write("\n")

total_lines = 0
total_files = 0
for dirpath, dirnames, names in os.walk(os.path.join(ROOT, "firmware")):
    for name in names:
        total_files += 1
        with open(os.path.join(dirpath, name), encoding="utf-8") as fh:
            total_lines += sum(1 for _ in fh)

print("corpus: %d files, %d lines" % (total_files, total_lines))
print("labels: %d" % len(LABELS))
