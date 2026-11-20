#include "fw.h"

#include <string.h>

int cmd_join3(char *out, size_t out_len, const char *a, const char *b,
              const char *c)
{
    size_t used = 0;
    const char *parts[3];
    int i;

    if (out == NULL || out_len == 0) {
        return -1;
    }
    parts[0] = a != NULL ? a : "";
    parts[1] = b != NULL ? b : "";
    parts[2] = c != NULL ? c : "";
    out[0] = '\0';
    for (i = 0; i < 3; i++) {
        size_t n = strlen(parts[i]);
        if (used + n + 1 > out_len) {
            return -1;
        }
        memcpy(out + used, parts[i], n);
        used += n;
        out[used] = '\0';
    }
    return (int)used;
}

int cmd_trim(char *s)
{
    size_t n;

    if (s == NULL) {
        return -1;
    }
    n = strlen(s);
    while (n > 0 && (s[n - 1] == '\n' || s[n - 1] == '\r' ||
                     s[n - 1] == ' ' || s[n - 1] == '\t')) {
        s[--n] = '\0';
    }
    return (int)n;
}
