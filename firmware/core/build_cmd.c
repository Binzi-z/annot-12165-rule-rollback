#include "fw.h"

#include <string.h>

/* Firmware update / provisioning entry points. Every function below takes
 * its device or image identifier from the running configuration document. */

int fw_apply_plc(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *dev = cfg_get_str(cfg, "device.name");

    if (dev == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "fwupdate --device %s --slot 0", dev);
    return system(cmd);
}

int fw_apply_gw(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *host = cfg_get_str(cfg, "gateway.addr");

    if (host == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "fwupdate --host %s --slot 1", host);
    return system(cmd);
}

int fw_apply_rtu(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *port = cfg_get_str(cfg, "rtu.serial");

    if (port == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "rtuconf --port %s --baud 115200", port);
    return system(cmd);
}

int fw_apply_hmi(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *target = cfg_get_str(cfg, "hmi.device");

    if (target == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "hmictl push --target %s", target);
    return system(cmd);
}

int fw_apply_psu(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *rail = cfg_get_str(cfg, "psu.rail");

    if (rail == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "psuctl set --rail %s --volt 12", rail);
    return system(cmd);
}

int fw_apply_fan(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *tray = cfg_get_str(cfg, "fan.tray");

    if (tray == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "fantool pwm --tray %s --duty 80", tray);
    return system(cmd);
}

int fw_apply_modem(struct fw_ctx *ctx, const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *apn = cfg_get_str(cfg, "modem.apn");

    if (apn == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "modemctl apn set %s", apn);
    return system(cmd);
}

/* Cross-TU: the command line is assembled by lib/strings.c, the buffer
 * is then executed here. */
int fw_apply_image(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *image = cfg_get_str(cfg, "fw.image");

    if (image == NULL) {
        return -1;
    }
    if (cmd_join3(cmd, sizeof(cmd), "fwupdate --image ", image,
                  " --slot 2") < 0) {
        return -1;
    }
    return system(cmd);
}

