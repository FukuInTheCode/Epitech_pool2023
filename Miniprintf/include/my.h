/*
** EPITECH PROJECT, 2023
** mini_printf
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
    #include <stdlib.h>
    #include <criterion/criterion.h>
    #include <criterion/redirect.h>

typedef int(*func)();

typedef struct {
    char *s;
    func f;
} my_struct_t;

int my_putchar(char);
int my_put_nbr(int);
int my_strncmp(char const *, char const *, int);
int mini_printf(char const *, ...);
int my_putstr(char const *);

static inline int disp_str_f(va_list args, int *i)
{
    *i += 2;
    return my_putstr(va_arg(args, char *));
}

static inline int disp_char_f(va_list args, int *i)
{
    *i += 2;
    return my_putchar((char)va_arg(args, int));
}

static inline int disp_int_f(va_list args, int *i)
{
    *i += 2;
    return my_put_nbr(va_arg(args, int));
}

static inline int disp_mod_f(va_list args, int *i)
{
    *i += 2;
    return write(1, "%", 1);
}

static my_struct_t const types[] = {
    {"%s", disp_str_f},
    {"%c", disp_char_f},
    {"%i", disp_int_f},
    {"%d", disp_int_f},
    {"%%", disp_mod_f},
    {0, NULL}
};

#endif
