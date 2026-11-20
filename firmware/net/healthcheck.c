#include "fw.h"

/* Watchdog probes; all command lines are compile-time constants. */

int hc_clock(void)
{
    return system("/bin/date -u +%s");
}

int hc_links(void)
{
    FILE *fp = popen("ip -br link", "r");

    if (fp == NULL) {
        return -1;
    }
    pclose(fp);
    return 0;
}

int hc_uptime(void)
{
    return shell_run("uptime -p");
}

int hc_journal(void)
{
    return cmd_run("journalctl -n 20 --no-pager");
}

