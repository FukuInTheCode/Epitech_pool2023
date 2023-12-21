/*
** EPITECH PROJECT, 2023
** my_printf s format
** File description:
** s
*/

#include "my.h"

int s_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    char *tmp = va_arg(args, char *);
    char *buf_s = malloc(1);
    int len = my_strlen(tmp);

    *buf_s = 0;
    if (flgs->precision == -1 || flgs->precision > len)
        add_buffer(&buf_s, tmp, len);
    else
        add_buffer(&buf_s, tmp, flgs->precision);
    !(flgs->has_minus) && my_revstr(buf_s);
    for (int i = 0; i++ < flgs->width - len; add_buffer(&buf_s, " ", 1));
    !(flgs->has_minus) && my_revstr(buf_s);
    add_buffer(buffer, buf_s, my_strlen(buf_s));
    free(buf_s);
    return (0);
}
