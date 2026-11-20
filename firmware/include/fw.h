#ifndef FW_H
#define FW_H

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#define CMD_MAX 512
#define LINE_MAX 256
#define CFG_MAX_KEYS 64
#define CFG_KEY_LEN 64
#define CFG_VAL_LEN 192
#define PKT_MAX_FIELDS 32
#define PKT_NAME_LEN 48
#define PKT_VAL_LEN 256

struct fw_ctx {
    unsigned slot;
    const char *profile;
};

struct cfg_doc {
    int count;
    char keys[CFG_MAX_KEYS][CFG_KEY_LEN];
    char vals[CFG_MAX_KEYS][CFG_VAL_LEN];
};

struct pkt {
    int count;
    char names[PKT_MAX_FIELDS][PKT_NAME_LEN];
    char vals[PKT_MAX_FIELDS][PKT_VAL_LEN];
};

struct tmpl_vars;

/* firmware/config/cfg_load.c */
const char *cfg_get_str(const struct cfg_doc *doc, const char *key);
int cfg_get_int(const struct cfg_doc *doc, const char *key, int def);
int cmd_allowlist_ok(const char *token);

/* firmware/net/proto_decode.c */
const char *pkt_str(const struct pkt *pkt, const char *field);

/* firmware/lib/strings.c */
int cmd_join3(char *out, size_t out_len, const char *a, const char *b,
              const char *c);
int cmd_trim(char *s);

/* firmware/lib/static_pool.c */
int pool_init(void);
int pool_exec_line(const char *line);

/* firmware/lib/templating.c */
struct tmpl_vars *tmpl_vars_new(void);
void tmpl_var_set(struct tmpl_vars *vars, const char *key, const char *value);
void tmpl_vars_free(struct tmpl_vars *vars);
int tmpl_render(const char *tpl, const struct tmpl_vars *vars, char *out,
                size_t out_len);

/* firmware/core/shell_wrap.c */
int shell_run(const char *cmd);
int cmd_run(const char *cmd);
int tmpl_exec(const char *tpl_name, struct tmpl_vars *vars);

/* firmware/net/ops.c */
typedef int (*cmd_fn)(const char *arg);
struct cmd_entry {
    const char *name;
    cmd_fn fn;
};
int ops_dispatch(const char *name, const char *arg);

#endif
