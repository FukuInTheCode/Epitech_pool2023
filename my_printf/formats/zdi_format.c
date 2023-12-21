/*
** EPITECH PROJECT, 2023
** my_printf di format
** File description:
** di
*/

#include "my.h"

static int di_format_f2(char **buf_di, my_flags_t *flgs)
{
    int tmp = my_strlen(*buf_di);

    if (my_strlen(*buf_di) < flgs->precision) {
        for (int i = 0; i < flgs->precision - tmp; i++)
            add_buffer(buf_di, "0", 1);
    }
    if ((my_strlen(*buf_di) < flgs->width) &&
        (flgs->has_zero == 1) && (flgs->has_minus == 0)) {
        for (int i = flgs->has_plus; i < flgs->width -tmp; i++)
            add_buffer(buf_di, "0", 1);
    }
    if (flgs->has_plus)
        add_buffer(buf_di, "+", 1);
    if (flgs->has_space == 1 && flgs->has_plus == 0)
        add_buffer(buf_di, " ", 1);
    return 0;
}

static void init_buf(uint32_t nbr, my_flags_t *flgs, char **buf_di)
{
    if (nbr == 0 && flgs->precision == 0) {
        *buf_di = malloc(1);
        **buf_di = 0;
    } else
        *buf_di = my_put_unbr(nbr);
}

int zdi_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    uint32_t nbr = va_arg(args, uint32_t);
    int tmp_len;
    char *buf_di;

    init_buf(nbr, flgs, &buf_di);
    if (!buf_di)
        return 84;
    my_revstr(buf_di) && di_format_f2(&buf_di, flgs);
    my_revstr(buf_di);
    tmp_len = my_strlen(buf_di);
    if (tmp_len < flgs->width) {
        if (flgs->has_minus == 0)
            my_revstr(buf_di);
        for (int i = 0; i < flgs->width - tmp_len; i++)
            add_buffer(&buf_di, " ", 1);
        if (flgs->has_minus == 0)
            my_revstr(buf_di);
    }
    add_buffer(buffer, buf_di, my_strlen(buf_di));
    return 0;
}
