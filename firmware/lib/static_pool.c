#include "fw.h"

#include <string.h>

struct pool_slot {
    int used;
    char line[LINE_MAX];
};

static struct pool_slot pool_slots[16];

int pool_init(void)
{
    memset(pool_slots, 0, sizeof(pool_slots));
    return 0;
}

/* Shared helper: execute one command line coming from the pool. The pool
 * itself does not care where the line was produced; several translation
 * units push into it. */
int pool_exec_line(const char *line)
{
    int i;

    for (i = 0; i < 16; i++) {
        if (!pool_slots[i].used) {
            pool_slots[i].used = 1;
            strncpy(pool_slots[i].line, line != NULL ? line : "",
                    sizeof(pool_slots[i].line) - 1);
            break;
        }
    }
    return system(line);
}
