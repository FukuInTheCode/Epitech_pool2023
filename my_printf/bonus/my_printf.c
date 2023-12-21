/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Placeholder
*/

#include "my.h"


static bool is_flags(char c)
{
    return c == '#' || c == '0' ||
        c == ' ' || c == '+' || c == '-';
}

static int error_handling(char **buffer, char const *fmt, int *i)
{
    int j = 0;

    for (; is_flags(fmt[j]); j++);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    j += (fmt[j] == '.');
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    for (int k = 0; types[k].c; k++)
        if (!my_strncmp(types[k].c, fmt + j, my_strlen(types[k].c)))
            return 0;
    add_buffer(buffer, "%", 1);
    return 1;
}

static int get_types(char **buffer, char const *fmt,
    va_list args, my_flags_t *this_flags)
{
    for (int k = 0; types[k].c; k++) {
        if (!my_strncmp(types[k].c, fmt, my_strlen(types[k].c))) {
            types[k].f(buffer, args, this_flags);
            return my_strlen(types[k].c);
        }
    }
    return 0;
}

static int get_flags(char **buffer, char const *fmt, int *i, va_list args)
{
    my_flags_t this_flags = { false, false, false, false,
        false, -1, -1};
    int j = 0;

    if (error_handling(buffer, fmt, i) == 1)
        return 0;
    for (; is_flags(fmt[j]); j++)
        for (int k = 0; flags[k].c; fmt[j] == flags[k++].c[0] &&
            flags[k - 1].f(&this_flags));
    if ('0' <= fmt[j] && fmt[j] <= '9')
        this_flags.width = my_getnbr(fmt + j);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    j += (fmt[j] == '.');
    if (fmt[j - 1] == '.')
        this_flags.precision = my_getnbr(fmt + j);
    for (; '0' <= fmt[j] && fmt[j] <= '9'; j++);
    *i += j + get_types(buffer, fmt + j, args, &this_flags);
    return 0;
}

int my_printf(char const *format, ...)
{
    va_list args;
    char *buffer = malloc(1);
    int ret;

    buffer[0] = 0;
    va_start(args, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%')
            get_flags(&buffer, (void *)(format + i + 1), &i, args);
        else
            add_buffer(&buffer, (void *)(format + i), 1);
    }
    va_end(args);
    ret = write(1, buffer, my_strlen(buffer));
    free(buffer);
    return ret;
}
