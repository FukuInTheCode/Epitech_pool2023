/*
** EPITECH PROJECT, 2023
** my_printf rdi_format.c
** File description:
** Placeholder
*/

#include "my.h"

static int call_di_format(char **buffer, my_flags_t *flgs, ...)
{
    va_list args;

    va_start(args, flgs);
    di_format_f(buffer, args, flgs);
    va_end(args);
    return 0;
}

int rdi_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    int n = va_arg(args, int);
    int *arg = va_arg(args, int *);

    for (int i = 0; i < n; call_di_format(buffer, flgs, arg[i++]));
    return 0;
}
