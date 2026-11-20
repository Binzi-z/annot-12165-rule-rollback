#include "fw.h"

#include <stdlib.h>
#include <string.h>

extern char **environ;

/* Safe call sites kept next to the risky ones. They all use constant
 * command lines, a fixed argv vector, or a whitelist check, so a scanner
 * that only looks for the API name flags them as false positives. */

int safe_sync(void)
{
    return system("sync");
}

int safe_ifconfig_up(void)
{
    return system("/sbin/ifconfig eth0 up");
}

int safe_reboot(void)
{
    return system("/sbin/reboot");
}

FILE *safe_uptime(void)
{
    return popen("uptime", "r");
}

FILE *safe_mounts(void)
{
    return popen("cat /proc/mounts", "r");
}

int safe_ls(void)
{
    char *argv[] = {"/bin/ls", "-l", "/var/log", NULL};

    return execv("/bin/ls", argv);
}

int safe_date(void)
{
    return execl("/bin/date", "date", "+%Y-%m-%d", (char *)NULL);
}

int safe_copy(const char *src)
{
    char *argv[] = {"/usr/bin/cp", "-f", (char *)src, "/tmp/stage", NULL};

    if (src == NULL || strncmp(src, "/var/lib/fw/", 12) != 0) {
        return -1;
    }
    return execve("/usr/bin/cp", argv, environ);
}

int safe_status(void)
{
    return shell_run("diagctl --status");
}

int safe_cmd_status(void)
{
    return cmd_run("status");
}

int safe_pool_memory(void)
{
    return pool_exec_line("memory");
}

int safe_rotate(void)
{
    return tmpl_exec("rotate.sh.j2", NULL);
}

