/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Placeholder
*/

#include "include/my.h"

static bool is_flags(char c)
{
    return c == '#' || c == '0' ||
        c == ' ' || c == '+' || c == '-';
}

static int get_flags(char **buffer, char const *fmt, int *i, va_list args)
{
    my_flags_t this_flags = { false, false, false, false,
        false, -1, -1};
    int j = 0;

    for (; is_flags(fmt[j]); j++)
        for (int i = 0; flags[i].c; flags[i++].c[0] == fmt[j]
            && flags[i - 1].f(&this_flags));
    this_flags.width += my_getnbr(fmt + j);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    j += (fmt[j] == '.');
    this_flags.precision += my_getnbr(fmt + j);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    for (int i = 0; types[i++].c;
        !my_strncmp(fmt + j, types[i - 1].c, my_strlen(types[i - 1].c)) &&
        types[i - 1].f(buffer, args, &this_flags));
    *i += j + 1;
    return 0;
}

int my_printf(char const *format, ...)
{
    va_list args;
    char *buffer = malloc(1);

    buffer[0] = 0;
    va_start(args, format);
    for (int i = 0; format[i];)
        (format[i] == '%' &&
        get_flags(&buffer, (void *)(format + ++i), &i, args)) ||
        add_buffer(&buffer, (void *)(format + i++), 1);
    va_end(args);
    return write(1, buffer, my_strlen(buffer));
}
