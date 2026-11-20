#include "fw.h"

#include <string.h>

/* Command templates rendered from templates/ and executed immediately. */

int tmpl_apply_deploy(const struct cfg_doc *cfg, struct tmpl_vars *vars)
{
    char rendered[CMD_MAX];
    const char *tpl = cfg_get_str(cfg, "template.deploy");
    const char *device = cfg_get_str(cfg, "template.deploy.value");

    if (tpl == NULL || device == NULL) {
        return -1;
    }
    tmpl_var_set(vars, "device", device);
    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {
        return -1;
    }
    return system(rendered);
}

int tmpl_apply_migrate(const struct cfg_doc *cfg, struct tmpl_vars *vars)
{
    char rendered[CMD_MAX];
    const char *tpl = cfg_get_str(cfg, "template.migrate");
    const char *target = cfg_get_str(cfg, "template.migrate.value");

    if (tpl == NULL || target == NULL) {
        return -1;
    }
    tmpl_var_set(vars, "target", target);
    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {
        return -1;
    }
    return system(rendered);
}

int tmpl_apply_publish(const struct cfg_doc *cfg, struct tmpl_vars *vars)
{
    char rendered[CMD_MAX];
    const char *tpl = cfg_get_str(cfg, "template.publish");
    const char *channel = cfg_get_str(cfg, "template.publish.value");

    if (tpl == NULL || channel == NULL) {
        return -1;
    }
    tmpl_var_set(vars, "channel", channel);
    return tmpl_exec(tpl, vars);
}

int tmpl_apply_downlink(const struct pkt *pkt, struct tmpl_vars *vars)
{
    char rendered[CMD_MAX];
    const char *tpl = pkt_str(pkt, "template");
    const char *dev = pkt_str(pkt, "device");

    if (tpl == NULL || dev == NULL) {
        return -1;
    }
    tmpl_var_set(vars, "device", dev);
    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {
        return -1;
    }
    return system(rendered);
}

int tmpl_apply_env(struct tmpl_vars *vars)
{
    char rendered[CMD_MAX];
    const char *tpl = getenv("FW_TEMPLATE");
    const char *arg = getenv("FW_TEMPLATE_ARG");

    if (tpl == NULL || arg == NULL) {
        return -1;
    }
    tmpl_var_set(vars, "arg", arg);
    if (tmpl_render(tpl, vars, rendered, sizeof(rendered)) < 0) {
        return -1;
    }
    return system(rendered);
}

