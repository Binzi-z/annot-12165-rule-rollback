#include "fw.h"

#include <stdlib.h>
#include <string.h>

extern char **environ;

/* Tools that still go through /bin/sh -c with a downlink argument. */

int tool_cfg_pull(const struct pkt *pkt)
{
    char *argv[4];
    const char *args = pkt_str(pkt, "args");

    if (args == NULL) {
        return -1;
    }
    argv[0] = "/bin/sh";
    argv[1] = "-c";
    argv[2] = (char *)args;
    argv[3] = NULL;
    return execv("/bin/sh", argv);
}

int tool_log_pack(const struct pkt *pkt)
{
    char *argv[4];
    const char *args = pkt_str(pkt, "pattern");

    if (args == NULL) {
        return -1;
    }
    argv[0] = "/bin/sh";
    argv[1] = "-c";
    argv[2] = (char *)args;
    argv[3] = NULL;
    return execv("/bin/sh", argv);
}

int tool_diag_dump(const struct pkt *pkt)
{
    char *argv[4];
    const char *args = pkt_str(pkt, "filter");

    if (args == NULL) {
        return -1;
    }
    argv[0] = "/bin/sh";
    argv[1] = "-c";
    argv[2] = (char *)args;
    argv[3] = NULL;
    return execv("/bin/sh", argv);
}

int tool_cert_import(const struct cfg_doc *cfg)
{
    const char *args = cfg_get_str(cfg, "tool.args");

    if (args == NULL) {
        return -1;
    }
    return execl("/bin/sh", "sh", "-c", args, NULL);
}

int tool_quota_sync(const struct cfg_doc *cfg)
{
    const char *args = cfg_get_str(cfg, "sync.args");

    if (args == NULL) {
        return -1;
    }
    return execlp("sh", "sh", "-c", args, NULL);
}

int tool_env_probe(void)
{
    char *argv[4];
    const char *args = getenv("FW_PROBE_ARGS");

    if (args == NULL) {
        return -1;
    }
    argv[0] = "/bin/sh";
    argv[1] = "-c";
    argv[2] = (char *)args;
    argv[3] = NULL;
    return execvp("sh", argv);
}

