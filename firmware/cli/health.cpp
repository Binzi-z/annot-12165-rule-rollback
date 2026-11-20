#include "fw.h"

#include <cstdio>
#include <cstdlib>
#include <string>

/* healthd is also used by the factory harness, which passes an override
 * through the environment. */

FILE *health_collect(void)
{
    const char *extra = getenv("FW_HEALTH_CMD");

    if (extra == nullptr) {
        return nullptr;
    }
    std::string cmd = std::string("healthd ") + extra;
    return popen(cmd.c_str(), "r");
}

