#include "fw.h"

#include <string.h>

/* BMC / PDU polling, one popen per sensor class. */

FILE *sensor_poll_temp(const struct cfg_doc *cfg)
{
    char line[LINE_MAX];
    const char *host = cfg_get_str(cfg, "sensor.host");

    if (host == NULL) {
        return NULL;
    }
    snprintf(line, sizeof(line), "ipmitool -H %s sdr type Temperature", host);
    return popen(line, "r");
}

FILE *sensor_poll_fan(const struct cfg_doc *cfg)
{
    char line[LINE_MAX];
    const char *host = cfg_get_str(cfg, "sensor.bmc");

    if (host == NULL) {
        return NULL;
    }
    snprintf(line, sizeof(line), "ipmitool -I lanplus -H %s sensor", host);
    return popen(line, "r");
}

FILE *sensor_poll_power(const struct cfg_doc *cfg)
{
    char line[LINE_MAX];
    const char *host = cfg_get_str(cfg, "sensor.pdu");

    if (host == NULL) {
        return NULL;
    }
    snprintf(line, sizeof(line), "pductl status --host %s", host);
    return popen(line, "r");
}

