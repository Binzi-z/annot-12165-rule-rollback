#include "fw.h"

#include <stdlib.h>
#include <string.h>

struct tmpl_entry {
    char key[48];
    char val[192];
};

#define TMPL_VAR_MAX 24

struct tmpl_vars {
    int count;
    struct tmpl_entry items[TMPL_VAR_MAX];
};

struct tmpl_vars *tmpl_vars_new(void)
{
    return (struct tmpl_vars *)calloc(1, sizeof(struct tmpl_vars));
}

void tmpl_var_set(struct tmpl_vars *vars, const char *key, const char *value)
{
    struct tmpl_entry *slot;

    if (vars == NULL || key == NULL || value == NULL ||
        vars->count >= TMPL_VAR_MAX) {
        return;
    }
    slot = &vars->items[vars->count++];
    strncpy(slot->key, key, sizeof(slot->key) - 1);
    strncpy(slot->val, value, sizeof(slot->val) - 1);
}

void tmpl_vars_free(struct tmpl_vars *vars)
{
    free(vars);
}

static const char *tmpl_lookup(const struct tmpl_vars *vars, const char *key)
{
    int i;

    if (vars == NULL) {
        return NULL;
    }
    for (i = 0; i < vars->count; i++) {
        if (strcmp(vars->items[i].key, key) == 0) {
            return vars->items[i].val;
        }
    }
    return NULL;
}

/* Very small {{name}} substituter used by the deploy/rotate templates. */
int tmpl_render(const char *tpl, const struct tmpl_vars *vars, char *out,
                size_t out_len)
{
    size_t used = 0;
    const char *cur;

    if (tpl == NULL || out == NULL || out_len == 0) {
        return -1;
    }
    cur = tpl;
    while (*cur != '\0') {
        if (cur[0] == '{' && cur[1] == '{') {
            const char *end = strstr(cur + 2, "}}");
            char name[48];
            const char *value;
            size_t n;

            if (end == NULL || (size_t)(end - (cur + 2)) >= sizeof(name)) {
                return -1;
            }
            n = (size_t)(end - (cur + 2));
            memcpy(name, cur + 2, n);
            name[n] = '\0';
            value = tmpl_lookup(vars, name);
            if (value == NULL) {
                value = "";
            }
            n = strlen(value);
            if (used + n + 1 > out_len) {
                return -1;
            }
            memcpy(out + used, value, n);
            used += n;
            cur = end + 2;
            continue;
        }
        if (used + 2 > out_len) {
            return -1;
        }
        out[used++] = *cur++;
    }
    out[used] = '\0';
    return (int)used;
}
