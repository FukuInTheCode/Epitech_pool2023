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

int my_snprintf(char *str, size_t size, char const *format, ...)
{
    va_list args;
    char *buffer = malloc(1);
    int ret;
    size_t i = 0;

    buffer[0] = 0;
    va_start(args, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%')
            get_flags(&buffer, (void *)(format + i + 1), &i, args);
        else
            add_buffer(&buffer, (void *)(format + i), 1);
    }
    va_end(args);
    ret = my_strlen(buffer);
    for (i = 0; i++ < ret && i - 1 < size; str[i - 1] = buffer[i - 1]);
    str[i] = 0;
    free(buffer);
    return i;
}
