#include "fw.h"

#include <string.h>

const char *pkt_str(const struct pkt *pkt, const char *field)
{
    int i;

    if (pkt == NULL || field == NULL) {
        return NULL;
    }
    for (i = 0; i < pkt->count; i++) {
        if (strcmp(pkt->names[i], field) == 0) {
            return pkt->vals[i];
        }
    }
    return NULL;
}

/* TLV decoder: field names/values come straight off the downlink socket. */
int pkt_decode(struct pkt *pkt, const unsigned char *buf, size_t len)
{
    size_t off = 0;

    if (pkt == NULL || buf == NULL) {
        return -1;
    }
    pkt->count = 0;
    while (off + 4 <= len && pkt->count < PKT_MAX_FIELDS) {
        unsigned int name_len = buf[off];
        unsigned int val_len = buf[off + 1];

        off += 4;
        if (name_len == 0 || name_len >= PKT_NAME_LEN ||
            val_len >= PKT_VAL_LEN || off + name_len + val_len > len) {
            return -1;
        }
        memcpy(pkt->names[pkt->count], buf + off, name_len);
        pkt->names[pkt->count][name_len] = '\0';
        off += name_len;
        memcpy(pkt->vals[pkt->count], buf + off, val_len);
        pkt->vals[pkt->count][val_len] = '\0';
        off += val_len;
        pkt->count++;
    }
    return pkt->count;
}
