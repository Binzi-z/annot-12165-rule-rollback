#include "fw.h"

#include <string.h>

/* Active probes triggered by the downlink control plane. */

FILE *probe_lldp(const struct pkt *pkt)
{
    char line[LINE_MAX];
    const char *arg = pkt_str(pkt, "iface");

    if (arg == NULL) {
        return NULL;
    }
    snprintf(line, sizeof(line), "lldpctl -i %s", arg);
    return popen(line, "r");
}

FILE *probe_arp(const struct pkt *pkt)
{
    char line[LINE_MAX];
    const char *arg = pkt_str(pkt, "subnet");

    if (arg == NULL) {
        return NULL;
    }
    snprintf(line, sizeof(line), "arp-scan %s", arg);
    return popen(line, "r");
}

FILE *probe_route(const struct pkt *pkt)
{
    char line[LINE_MAX];
    const char *arg = pkt_str(pkt, "dst");

    if (arg == NULL) {
        return NULL;
    }
    snprintf(line, sizeof(line), "traceroute -n %s", arg);
    return popen(line, "r");
}

