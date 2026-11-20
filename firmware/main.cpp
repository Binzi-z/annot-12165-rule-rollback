#include "fw.h"

#include <cstdlib>
#include <cstring>

/* Boot-time hooks. Environment overrides exist for factory bring-up and
 * are not cleared by the image. */

int fw_boot_hook(struct fw_ctx *ctx)
{
    char cmd[CMD_MAX];
    const char *hook = getenv("FW_BOOT_CMD");

    if (hook == nullptr) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "%s --slot %u", hook, ctx->slot);
    return std::system(cmd);
}

int fw_selftest(struct fw_ctx *ctx)
{
    char cmd[CMD_MAX];
    const char *args = getenv("FW_SELFTEST_ARGS");

    if (args == nullptr) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "selftest %s --slot %u", args, ctx->slot);
    return std::system(cmd);
}

int fw_recover(const struct cfg_doc *cfg)
{
    char cmd[CMD_MAX];
    const char *target = getenv("FW_RECOVER_TARGET");

    if (target == nullptr) {
        return -1;
    }
    if (cmd_join3(cmd, sizeof(cmd), "recover --target ", target,
                  " --mode auto") < 0) {
        return -1;
    }
    return std::system(cmd);
}

/* Benign: fixed maintenance commands used by the factory self-check. */
int fw_factory_check(void)
{
    if (std::system("fwupdate --check") != 0) {
        return -1;
    }
    FILE *out = popen("fw_printenv bootcmd", "r");
    if (out != nullptr) {
        pclose(out);
    }
    return std::system("sync");
}

