/*
** EPITECH PROJECT, 2023
** my_printf di format
** File description:
** di
*/

#include "../include/my.h"

void di_format_f2(char **buf_di, int nbr, my_flags_t *flgs)
{
    if (my_strlen(*buf_di) < flgs->precision) {
        for (int i = 0; i < flgs->precision - my_strlen(*buf_di); i++)
            add_buffer(buf_di, "0", 1);
    }
    if ((my_strlen(*buf_di) < flgs->width) &&
        (flgs->has_zero == 1) && (flgs->has_minus == 0)) {
        for (int i = (nbr < 0); i < flgs->width - my_strlen(*buf_di); i++)
            add_buffer(buf_di, "0", 1);
    }
    if (nbr < 0)
        add_buffer(buf_di, "-", 1);
    if (flgs->has_plus && nbr >= 0)
        add_buffer(buf_di, "+", 1);
    if (flgs->has_space == 1 && flgs->has_plus == 0 && nbr >= 0)
        add_buffer(buf_di, " ", 1);
}

int di_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    int nbr = va_arg(args, int);
    int tmp_len;
    char *buf_di = my_put_nbr(nbr);

    if (nbr == 0 && flgs->precision == 0)
        return (0);
    my_revstr(buf_di);
    di_format_f2(&buf_di, nbr, flgs);
    my_revstr(buf_di);
    tmp_len = my_strlen(buf_di);
    if ((my_strlen(buf_di) < flgs->width) && (flgs->has_zero == 0)) {
        if (flgs->has_minus == 0)
            my_revstr(buf_di);
        for (int i = 0; i < flgs->width - tmp_len; i++)
            add_buffer(&buf_di, " ", 1);
        if (flgs->has_minus == 0)
            my_revstr(buf_di);
    }
    add_buffer(buffer, buf_di, my_strlen(buf_di));
}
