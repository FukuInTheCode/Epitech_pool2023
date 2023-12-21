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
        for (int k = 0; flags[k].c; fmt[j] == flags[k++].c[0] &&
            flags[k - 1].f(&this_flags));
    this_flags.width += my_getnbr(fmt + j);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    this_flags.precision += my_getnbr(fmt + j);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    for (int k = 0; types[k].c;
        !my_strncmp(types[k++].c, fmt + j, my_strlen(types[k].c)) &&
        types[k - 1].f(buffer, args, &this_flags));
    *i += ++j;
    return 0;
}

int my_printf(char const *format, ...)
{
    va_list args;
    char *buffer = malloc(1);

    buffer[0] = 0;
    va_start(args, format);
    for (int i = 0; format[i]; i++)
        (format[i] == '%' &&
        !get_flags(&buffer, (void *)(format + i + 1), &i, args)) ||
        add_buffer(&buffer, (void *)(format + i), 1);
    va_end(args);
    return write(1, buffer, my_strlen(buffer));
}
