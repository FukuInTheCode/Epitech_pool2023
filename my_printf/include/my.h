/*
** EPITECH PROJECT, 2023
** my_printf my.h
** File description:
** Placeholder
*/


#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <unistd.h>
    #include <stdint.h>
    #include <time.h>
    #include <limits.h>
    #include <stdarg.h>
    #include <errno.h>
    #include <stdbool.h>
    #include <stdlib.h>
//    #include <criterion/criterion.h>
//    #include <criterion/redirect.h>

    #define GETNBR_CHECK (is_int_stred(str[i]) || is_sign_stred(str[i]))

typedef int(*format_f)();

typedef struct {
    bool has_zero;
    bool has_hastag;
    bool has_space;
    bool has_plus;
    bool has_minus;
    int width;
    int precision;
} my_flags_t;

typedef struct {
    char *c;
    format_f f;
} my_struct_t;

int my_printf(char const *, ...);
int hastag_flag_f(my_flags_t *);
int minus_flag_f(my_flags_t *);
int plus_flag_f(my_flags_t *);
int space_flag_f(my_flags_t *);
int zero_flag_f(my_flags_t *);
char *my_strcat(char *, char const *);
char *my_strcpy(char *, char const *);
size_t my_strlen(char const *);
char *my_strncat(char *, char const *, int);
char *my_revstr(char *);
int my_getnbr(char const *);
double my_floor(double);
int my_strncmp(char const *, char const *, int);
int add_buffer(char **, char *, int);
char *my_putptr_base(size_t n, char *base);
char *my_put_nbr(int);
char *my_put_unbr(unsigned int);
char *my_put_lnbr(long);
char *my_put_llnbr(long long);
char *my_put_float(double, int);
char *my_put_lfloat(long double, int);
int my_fexpn(double, int, double *);
int my_lfexpn(long double, int, long double *);

int c_format_f(char **, va_list, my_flags_t *);

int di_format_f(char **, va_list, my_flags_t *);
int ldi_format_f(char **, va_list, my_flags_t *);
int zdi_format_f(char **, va_list, my_flags_t *);
int lldi_format_f(char **, va_list, my_flags_t *);

int amaj_format_f(char **, va_list, my_flags_t *);
int a_format_f(char **, va_list, my_flags_t *);
int lmaja_format_f(char **, va_list, my_flags_t *);

int e_format_f(char **, va_list, my_flags_t *);
int emaj_format_f(char **, va_list, my_flags_t *);

int s_format_f(char **, va_list, my_flags_t *);

int u_format_f(char **, va_list, my_flags_t *);

int f_format_f(char **, va_list, my_flags_t *);

int p_format_f(char **, va_list, my_flags_t *);

int o_format_f(char **, va_list, my_flags_t *);

int g_format_f(char **, va_list, my_flags_t *);
int gmaj_format_f(char **, va_list, my_flags_t *);

int mod_format_f(char **, va_list, my_flags_t *);

int x_format_f(char **, va_list, my_flags_t *);
int xmaj_format_f(char **, va_list, my_flags_t *);

int n_format_f(char **, va_list, my_flags_t *);
int hhn_format_f(char **, va_list, my_flags_t *);
int hn_format_f(char **, va_list, my_flags_t *);
int ln_format_f(char **, va_list, my_flags_t *);
int lln_format_f(char **, va_list, my_flags_t *);
int zn_format_f(char **, va_list, my_flags_t *);

int nothing_format_f(char **, va_list, my_flags_t *);

static my_struct_t const types[] = {
    {"c", c_format_f},
//    {"hhc", hhc_format_f},
//    {"hc", hc_format_f},
//    {"llc", llc_format_f},
//    {"lc", lc_format_f},
//    {"zc", zc_format_f},
    {"n", n_format_f},
    {"hhn", hhn_format_f},
    {"hn", hn_format_f},
    {"ln", ln_format_f},
    {"lln", lln_format_f},
    {"zn", zn_format_f},
    {"d", di_format_f},
    {"hhd", di_format_f},
    {"hd", di_format_f},
    {"ld", ldi_format_f},
    {"lld", lldi_format_f},
    {"zd", zdi_format_f},
    {"i", di_format_f},
    {"hhi", di_format_f},
    {"hi", di_format_f},
    {"li", ldi_format_f},
    {"lli", lldi_format_f},
    {"zi", zdi_format_f},
    {"s", s_format_f},
    {"hhs", s_format_f},
    {"hs", s_format_f},
    {"ls", nothing_format_f},
    {"lls", nothing_format_f},
    {"f", f_format_f},
//    {"hhf", hhf_format_f},
//    {"hf", hf_format_f},
//    {"lf", lf_format_f},
//    {"llf", llf_format_f},
//    {"zf", zf_format_f},
    {"F", f_format_f},
//    {"hhF", hhf_format_f},
//    {"hF", hf_format_f},
//    {"llF", llf_format_f},
//    {"lF", lf_format_f},
//    {"zF", zf_format_f},
    {"u", u_format_f},
//    {"hhu", hhu_format_f},
//    {"hu", hu_format_f},
//    {"llu", llu_format_f},
//    {"lu", lu_format_f},
//    {"zu", zu_format_f},
    {"o", o_format_f},
//    {"hho", hho_format_f},
//    {"ho", ho_format_f},
//    {"llo", llo_format_f},
//    {"lo", lo_format_f},
//    {"zo", zo_format_f},
    {"x", x_format_f},
//    {"hhx", hhx_format_f},
//    {"hx", hx_format_f},
//    {"llx", llx_format_f},
//    {"lx", lx_format_f},
//    {"zx", zx_format_f},
    {"X", xmaj_format_f},
//    {"hhX", hhxmaj_format_f},
//    {"hX", hxmaj_format_f},
//    {"llX", llxmaj_format_f},
//    {"lX", lxmaj_format_f},
//    {"zX", zxmaj_format_f},
    {"e", e_format_f},
//    {"hhe", hhe_format_f},
//    {"he", he_format_f},
//    {"lle", lle_format_f},
//    {"le", le_format_f},
//    {"ze", ze_format_f},
    {"E", emaj_format_f},
//    {"hhE", hhemaj_format_f},
//    {"hE", hemaj_format_f},
//    {"llE", llemaj_format_f},
//    {"lE", lemaj_format_f},
//    {"zE", zemaj_format_f},
    {"g", g_format_f},
//    {"hhg", hhg_format_f},
//    {"hg", hg_format_f},
//    {"llg", llg_format_f},
//    {"lg", lg_format_f},
//    {"zg", zg_format_f},
    {"G", gmaj_format_f},
//    {"hhG", hhG_format_f},
//    {"hG", hG_format_f},
//    {"llG", llG_format_f},
//    {"lG", lG_format_f},
//    {"zG", zG_format_f},
    {"a", a_format_f},
    {"hha", a_format_f},
    {"ha", a_format_f},
    {"la", a_format_f},
    {"lla", a_format_f},
    {"A", amaj_format_f},
    {"hhA", amaj_format_f},
    {"hA", amaj_format_f},
    {"lA", amaj_format_f},
    {"llA", amaj_format_f},
    {"p", p_format_f},
//    {"hhp", hhp_format_f},
//    {"hp", hp_format_f},
//    {"llp", llp_format_f},
//    {"lp", lp_format_f},
//    {"zp", zp_format_f},
    {"hh%", mod_format_f},
    {"h%", mod_format_f},
    {"%", mod_format_f},
    {"l%", mod_format_f},
    {"ll%", mod_format_f},
    {"z%", mod_format_f},
    {NULL, NULL}
};

static my_struct_t const flags[] = {
    {"#", hastag_flag_f},
    {"0", zero_flag_f},
    {" ", space_flag_f},
    {"+", plus_flag_f},
    {"-", minus_flag_f},
    {0, NULL}
};

#endif
