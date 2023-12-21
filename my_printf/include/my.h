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
int my_strlen(char const *);
char *my_strncat(char *, char const *, int);
char *my_revstr(char *);
int my_getnbr(char const *);
int my_strncmp(char const *, char const *, int);
int add_buffer(char **, char *, int);
char *my_put_nbr(int);
char *my_put_unbr(unsigned int);
char *my_put_float(double, int);
int my_fexpn(double, int, double *);
int c_format_f(char **, va_list, my_flags_t *);
int di_format_f(char **, va_list, my_flags_t *);
int e_format_f(char **, va_list, my_flags_t *);
int a_format_f(char **, va_list, my_flags_t *);
int emaj_format_f(char **, va_list, my_flags_t *);
int s_format_f(char **, va_list, my_flags_t *);
int u_format_f(char **, va_list, my_flags_t *);

static my_struct_t const types[] = {
    {"c", c_format_f},
    {"d", di_format_f},
//    {"lld", di_format_f},
    {"i", di_format_f},
    {"s", s_format_f},
//    {"f", f_format_f},
//    {"F", F_format_f},
    {"u", u_format_f},
//    {"o", o_format_f},
//    {"x", x_format_f},
//    {"X", X_format_f},
    {"e", e_format_f},
    {"E", emaj_format_f},
//    {"g", g_format_f},
//    {"G", G_format_f},
//    {"a", a_format_f},
//    {"A", A_format_f},
//    {"p", p_format_f},
//    {"%", mod_format_f},
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
