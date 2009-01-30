int
__wt_db_bulk_load(wt_args_db_bulk_load *argp);
int
__wt_bt_close(DB *db);
int
__wt_bt_lex_compare(DB *db, const DBT *user_dbt, const DBT *tree_dbt);
int
__wt_bt_int_compare(DB *db, const DBT *user_dbt, const DBT *tree_dbt);
int
__wt_bt_dump_debug(DB *db, char *ofile, FILE *fp);
int
__wt_bt_dump_ipage(DB *db, WT_PAGE *page, char *ofile, FILE *fp);
int
__wt_bt_dump_page(DB *db, WT_PAGE *page, char *ofile, FILE *fp);
void
__wt_bt_desc_init(DB *db, WT_PAGE *page);
int
__wt_bt_desc_verify(DB *db, WT_PAGE *page);
int
__wt_bt_desc_read(DB *db);
int
__wt_bt_desc_write(DB *db, u_int32_t root_addr);
int
__wt_db_dump(wt_args_db_dump *argp);
void
__wt_bt_print(u_int8_t *data, u_int32_t len, FILE *stream);
int
__wt_db_get(wt_args_db_get *argp);
int
__wt_bt_build_verify(void);
int
__wt_bt_data_copy_to_dbt(DB *db, u_int8_t *data, size_t len, DBT *copy);
void
__wt_bt_first_offp(WT_PAGE *page, WT_ITEM_OFFP *offp);
void
__wt_set_ff_and_sa_from_addr(DB *db, WT_PAGE *page, u_int8_t *addr);
const char *
__wt_bt_hdr_type(u_int32_t type);
const char *
__wt_bt_item_type(u_int32_t type);
int
__wt_bt_open(DB *db);
int
__wt_bt_ovfl_in(DB *db, u_int32_t addr, u_int32_t len, WT_PAGE **pagep);
int
__wt_bt_ovfl_write(DB *db, DBT *dbt, u_int32_t *addrp);
int
__wt_bt_ovfl_copy(DB *db, WT_ITEM_OVFL *from, WT_ITEM_OVFL *copy);
int
__wt_bt_ovfl_copy_to_dbt(DB *db, WT_ITEM_OVFL *ovfl, DBT *copy);
int
__wt_bt_ovfl_copy_to_indx(DB *db, WT_PAGE *page, WT_INDX *ip);
int
__wt_bt_page_alloc(DB *db, int isleaf, WT_PAGE **pagep);
int
__wt_bt_page_in(DB *db, u_int32_t addr, int isleaf, WT_PAGE **pagep);
int
__wt_bt_page_out(DB *db, WT_PAGE *page, u_int32_t flags);
void
__wt_bt_page_indx_clean(ENV *env, WT_PAGE *page, int free_indx);
int
__wt_bt_page_inmem(DB *db, WT_PAGE *page);
int
__wt_bt_page_inmem_append(DB *db,
    WT_PAGE *page, WT_ITEM *key_item, WT_ITEM *off_item);
int
__wt_bt_dbt_return(DB *db, DBT *data, WT_PAGE *page, WT_INDX *indx);
int
__wt_db_verify(wt_args_db_verify *argp);
int
__wt_bt_verify_int(DB *db, FILE *fp);
int
__wt_bt_verify_page(DB *db, WT_PAGE *page, bitstr_t *fragbits, FILE *fp);
int
__wt_toc_sched(WT_TOC *toc);
int
__wt_db_close(wt_args_db_close *argp);
void
__wt_db_err(DB *db, int error, const char *fmt, ...);
void
__wt_db_errx(DB *db, const char *fmt, ...);
int
__wt_db_set_btree_compare_int_verify(wt_args_db_set_btree_compare_int *argp);
int
__wt_db_destroy(wt_args_db_destroy *argp);
int
__wt_db_destroy_int(DB *db, u_int32_t flags);
int
__wt_idb_destroy(DB *db, int refresh);
int
__wt_db_lockout_err(DB *db);
int
__wt_db_lockout_open(DB *db);
int
__wt_db_open(wt_args_db_open *argp);
int
__wt_db_stat_print(wt_args_db_stat_print *argp);
int
__wt_db_stat_clear(wt_args_db_stat_clear *argp);
int
__wt_db_sync(wt_args_db_sync *argp);
int
__wt_cache_open(ENV *env);
int
__wt_cache_close(ENV *env);
int
__wt_cache_db_open(DB *db);
int
__wt_cache_db_close(DB *db);
int
__wt_cache_db_sync(DB *db);
int
__wt_cache_db_alloc(DB *db, u_int32_t bytes, WT_PAGE **pagep);
int
__wt_cache_db_in(DB *db,
    off_t offset, u_int32_t bytes, u_int32_t flags, WT_PAGE **pagep);
int
__wt_cache_db_out(DB *db, WT_PAGE *page, u_int32_t flags);
int
__wt_env_close(wt_args_env_close *argp);
void
__wt_env_err(ENV *env, int error, const char *fmt, ...);
void
__wt_env_errx(ENV *env, const char *fmt, ...);
int
__wt_env_set_verbose_verify(wt_args_env_set_verbose *argp);
int
__wt_build_verify(void);
int
__wt_global_init(void);
int
__wt_breakpoint(void);
int
__wt_env_destroy(wt_args_env_destroy *argp);
int
__wt_env_destroy_int(ENV *env, u_int32_t flags);
int
__wt_ienv_destroy(ENV *env, int refresh);
int
__wt_env_lockout_err(ENV *env);
int
__wt_env_open(wt_args_env_open *argp);
int
__wt_env_stat_print(wt_args_env_stat_print *argp);
int
__wt_env_stat_clear(wt_args_env_stat_clear *argp);
void
__wt_abort(ENV *env);
int
__wt_calloc(ENV *env, size_t number, size_t size, void *retp);
int
__wt_malloc(ENV *env, size_t bytes_to_allocate, void *retp);
int
__wt_realloc(ENV *env, size_t bytes_to_allocate, void *retp);
int
__wt_strdup(ENV *env, const char *str, void *retp);
void
__wt_free(ENV *env, void *p);
int
__wt_filesize(ENV *env, WT_FH *fh, off_t *sizep);
int
__wt_mtx_init(WT_MTX *mtx);
int
__wt_lock(WT_MTX *mtx);
int
__wt_unlock(WT_MTX *mtx);
int
__wt_mtx_destroy(WT_MTX *mtx);
int
__wt_open(ENV *env,
    const char *name, mode_t mode, u_int32_t flags, WT_FH **fhp);
int
__wt_close(ENV *env, WT_FH *fh);
int
__wt_read(ENV *env, WT_FH *fh, off_t offset, u_int32_t bytes, void *buf);
int
__wt_write(ENV *env, WT_FH *fh, off_t offset, u_int32_t bytes, void *buf);
void
__wt_sleep(long seconds, long micro_seconds);
void
__wt_env_config_methods(ENV *env);
void
__wt_env_config_methods_open(ENV *env);
void
__wt_env_config_methods_lockout(ENV *env);
void
__wt_db_config_methods(DB *db);
void
__wt_db_config_methods_open(DB *db);
void
__wt_db_config_methods_lockout(DB *db);
int
__wt_api_switch(WT_TOC *toc);
u_int32_t
__wt_cksum(void *chunk, u_int32_t bytes);
void
__wt_errcall(void *cb, void *handle,
    const char *pfx1, const char *pfx2,
    int error, const char *fmt, va_list ap);
void
__wt_errfile(FILE *fp,
    const char *pfx1, const char *pfx2, int error, const char *fmt, va_list ap);
void
__wt_assert(ENV *env, const char *check, const char *file_name, int line_number);
int
__wt_api_flags(ENV *env, const char *name);
int
__wt_database_format(DB *db);
u_int32_t
__wt_prime(u_int32_t n);
int
__wt_stat_alloc_fh(ENV *env, WT_STATS **statsp);
int
__wt_stat_clear_fh(WT_STATS *stats);
int
__wt_stat_alloc_db(ENV *env, WT_STATS **statsp);
int
__wt_stat_clear_db(WT_STATS *stats);
int
__wt_stat_alloc_env(ENV *env, WT_STATS **statsp);
int
__wt_stat_clear_env(WT_STATS *stats);
