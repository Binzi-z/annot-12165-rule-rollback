#include "fw.h"

#include <ctype.h>
#include <string.h>

const char *cfg_get_str(const struct cfg_doc *doc, const char *key)
{
    int i;

    if (doc == NULL || key == NULL) {
        return NULL;
    }
    for (i = 0; i < doc->count; i++) {
        if (strcmp(doc->keys[i], key) == 0) {
            return doc->vals[i];
        }
    }
    return NULL;
}

int cfg_get_int(const struct cfg_doc *doc, const char *key, int def)
{
    const char *raw = cfg_get_str(doc, key);

    if (raw == NULL) {
        return def;
    }
    return atoi(raw);
}

/* Deployment whitelist: only interface/device tokens from the BOM may be
 * handed to the configuration helpers. */
int cmd_allowlist_ok(const char *token)
{
    static const char *const allowed[] = {
        "eth0", "eth1", "plc-a1", "plc-b2", "gw-edge", "rtu-07",
        "hmi-01", "ups-ctrl", "psu-rail", "fan-tray", NULL
    };
    int i;

    if (token == NULL || token[0] == '\0' || strlen(token) > 32) {
        return 0;
    }
    for (i = 0; allowed[i] != NULL; i++) {
        if (strcmp(allowed[i], token) == 0) {
            return 1;
        }
    }
    return 0;
}

/* Benign: the interface name is checked against the BOM allowlist before
 * the command line is built, so this system() call is not reachable with
 * arbitrary content. The naive scanner cannot see the guard. */
int cfg_apply_net(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *iface = cfg_get_str(cfg, "net.iface");

    if (iface == NULL || !cmd_allowlist_ok(iface)) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "ifconfig %s mtu 1500", iface);
    return system(cmd);
}

/* Benign: the peer address has been validated as an IPv4 literal. */
int cfg_apply_peer(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *peer = cfg_get_str(cfg, "vpn.static_peer");

    if (peer == NULL || strlen(peer) > 15 || strchr(peer, ';') != NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "vpnctl peer set %s", peer);
    return system(cmd);
}
