/*
** EPITECH PROJECT, 2023
** my_printf o format
** File description:
** di
*/

#include "my.h"

static int formating_buffer(char **buffer, my_flags_t *flgs)
{
    size_t len = my_strlen(*buffer);

    for (int i = 0; i++ < flgs->precision - (int)len;
        add_buffer(buffer, "0", 1));
    len = my_strlen(*buffer);
    flgs->has_minus && my_revstr(*buffer);
    for (int i = 0; i++ < flgs->width - (int)len;
        add_buffer(buffer, " ", 1));
    flgs->has_minus && my_revstr(*buffer);
    return 0;
}

static int init_buffer(char **buffer, unsigned nbr, my_flags_t *flgs)
{
    char *tmp = "";

    (flgs->precision != 0 || nbr != 0) &&
        (tmp = my_putptr_base(nbr, "01234567"));
    tmp && add_buffer(buffer, tmp, my_strlen(tmp));
    free(tmp);
    return 0;
}

int o_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    unsigned nbr = va_arg(args, unsigned);
    char *buf_o = malloc(1);

    *buf_o = 0;
    init_buffer(&buf_o, nbr, flgs);
    flgs->has_hastag && my_revstr(buf_o) &&
        (add_buffer(&buf_o, "0", 1) || 1) && my_revstr(buf_o);
    my_revstr(buf_o) && (formating_buffer(&buf_o, flgs) || 1) &&
        my_revstr(buf_o);
    add_buffer(buffer, buf_o, my_strlen(buf_o));
    free(buf_o);
    return 0;
}
