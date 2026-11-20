#include "fw.h"

#include <string.h>

/* Indirect command table: the control plane calls ops_dispatch(), which
 * looks the operation up by name and invokes it through a function pointer.
 * Symbols are resolved at run time, so a syntactic call graph stops at
 * ops[i].fn(arg). */

static int op_unit_reload(const char *arg)
{
    char cmd[CMD_MAX];

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "reload --unit %s", arg);
    return system(cmd);
}

static int op_zone_flush(const char *arg)
{
    char cmd[CMD_MAX];

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "zone flush %s", arg);
    return system(cmd);
}

static int op_env_apply(const char *arg)
{
    char cmd[CMD_MAX];

    if (arg == NULL) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "op apply %s", arg);
    return system(cmd);
}

static const struct cmd_entry op_table[] = {
    {"unit-reload", op_unit_reload},
    {"zone-flush", op_zone_flush},
    {"env-apply", op_env_apply},
};

int ops_dispatch(const char *name, const char *arg)
{
    size_t i;

    for (i = 0; i < sizeof(op_table) / sizeof(op_table[0]); i++) {
        if (strcmp(op_table[i].name, name) == 0) {
            return op_table[i].fn(arg);
        }
    }
    return -1;
}

