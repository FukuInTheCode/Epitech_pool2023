/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** Placeholder
*/

#include "include/my.h"

static int is_flags(char const *format, int *i, va_list args)
{
    if (*(format + *i) != '%')
        return write(1, (format + (*i)++), 1);
    if (!my_strncmp(format + *i, "%%", 2)) {
        *i += 2;
        return write(1, "%", 1);
    }
    if (!my_strncmp(format + *i, "%d", 2) || !my_strncmp(format + *i, "%i", 2)) {
        *i += 2;
        return my_put_nbr((int)va_arg(args, int));
    }
    if (!my_strncmp(format + *i, "%s", 2)) {
        *i += 2;
        return my_putstr((char *)va_arg(args, char *));
    }
    if (!my_strncmp(format + *i, "%c", 2)) {
        *i += 2;
        return my_putchar((char)va_arg(args, int)) + 1;
    }
    return write(1, (format + (*i)++), 1);
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
