#include "fw.h"

#include <string.h>

/* Control-plane dispatcher: every handler starts from a decoded downlink
 * packet (firmware/net/proto_decode.c). */

#define RUN_SHELL(c) system(c)

int dispatch_fw_push(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "device");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "fwupdate --device %s --profile live", arg);
    return system(cmd);
}

int dispatch_diag(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "target");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "diagctl run --target %s", arg);
    return system(cmd);
}

int dispatch_cfg_set(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "key");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "cfgset %s=1", arg);
    return system(cmd);
}

int dispatch_cert_rotate(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "cn");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "certrot --cn %s", arg);
    return system(cmd);
}

int dispatch_reboot_hook(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "reason");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "reboot --reason %s", arg);
    RUN_SHELL(cmd);
    return 0;
}

int dispatch_snapshot(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "vol");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "snapshot --vol %s", arg);
    RUN_SHELL(cmd);
    return 0;
}

int dispatch_ntp_sync(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *server = cfg_get_str(cfg, "ntp.server");

    if (server == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "ntpd -q -p %s", server);
    RUN_SHELL(cmd);
    return 0;
}

int dispatch_log_upload(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *url = pkt_str(pkt, "url");

    if (url == NULL) {
        return -1;
    }
    if (cmd_join3(cmd, sizeof(cmd), "logger --remote ", url,
                  " --tag fw") < 0) {
        return -1;
    }
    return system(cmd);
}

