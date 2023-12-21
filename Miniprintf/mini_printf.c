/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** Placeholder
*/

#include "include/my.h"

static int is_flags(char const *format, int *i, va_list args)
{
    int ret = 0;

    for (int j = 0; types[j].s; !my_strncmp(format + *i, types[j++].s, 2) &&
        (ret += types[j - 1].f(args, i)));
    !ret && (ret += write(1, format + (*i)++, 1));
    return ret;
}

int mini_printf(char const *format, ...)
{
    va_list args;
    int ret = 0;

    va_start(args, format);
    for (int i = 0; format[i]; ret += is_flags(format, &i, args));
    va_end(args);
    return ret;
}
