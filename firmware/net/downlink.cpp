#include "fw.h"

#include <cstdio>
#include <cstring>
#include <string>

/* C++ side of the downlink stack: the same decoded packet, wrapped in
 * std::string before being handed to the execution helpers. */

int downlink_apply(const struct pkt *pkt)
{
    const char *dev = pkt_str(pkt, "device");

    if (dev == nullptr) {
        return -1;
    }
    std::string cmd = std::string("fwupdate --device ") + dev +
                      " --channel beta";
    return std::system(cmd.c_str());
}

int downlink_rollback(const struct pkt *pkt)
{
    const char *slot = pkt_str(pkt, "slot");

    if (slot == nullptr) {
        return -1;
    }
    std::string cmd = std::string("fwrollback --slot ") + slot;
    return std::system(cmd.c_str());
}

FILE *downlink_probe(const struct pkt *pkt)
{
    const char *host = pkt_str(pkt, "host");

    if (host == nullptr) {
        return nullptr;
    }
    std::string cmd = std::string("ipmitool -H ") + host + " mc info";
    return popen(cmd.c_str(), "r");
}

