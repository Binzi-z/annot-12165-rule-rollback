#include "fw.h"

#include <string.h>

/* Shared shell wrappers. The implementations are deliberately thin: they
 * hand the string to system()/popen() without parsing it. Callers in other
 * translation units treat them as a generic "run this" helper. */
int shell_run(const char *cmd)
{
    return system(cmd);
}

int cmd_run(const char *cmd)
{
    return system(cmd);
}

int tmpl_exec(const char *tpl_name, struct tmpl_vars *vars)
{
    char rendered[CMD_MAX];
    int rc;

    if (tpl_name == NULL) {
        return -1;
    }
    rc = tmpl_render(tpl_name, vars, rendered, sizeof(rendered));
    if (rc < 0) {
        return -1;
    }
    return system(rendered);
}

int apply_net_profile(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *arg = cfg_get_str(cfg, "net.profile");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "netcfg apply %s", arg);
    return shell_run(cmd);
}

int apply_acl(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *arg = cfg_get_str(cfg, "acl.name");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "aclctl load %s", arg);
    return shell_run(cmd);
}

int apply_vpn(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *arg = cfg_get_str(cfg, "vpn.peer");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "vpnctl peer %s", arg);
    return shell_run(cmd);
}

int apply_downlink_unit(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "unit");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "unitctl start %s", arg);
    return shell_run(cmd);
}

int apply_downlink_rule(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "rule");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "rulectl add %s", arg);
    return shell_run(cmd);
}

int apply_downlink_zone(const struct pkt *pkt)
{
    char cmd[CMD_MAX];
    const char *arg = pkt_str(pkt, "zone");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "zonecfg set %s", arg);
    return shell_run(cmd);
}

int apply_env_override(void)
{
    char cmd[CMD_MAX];
    const char *arg = getenv("FW_OVERRIDE");

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "fwupdate --override %s", arg);
    return cmd_run(cmd);
}

