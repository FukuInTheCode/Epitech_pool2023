/*
** EPITECH PROJECT, 2023
** myprintf u format
** File description:
** u
*/

#include "../include/my.h"

void u_format_f2(char **buffer, int nbr, my_flags_t *flgs)
{
    if (tmp < flgs->precision) {
        for (int i = 0; i < flgs->precision - tmp; i++)
            add_buffer(&buf_u, "0", 1);
    }
    if ((tmp < flgs->width) &&
        (flgs->has_zero == 1) && (flgs->has_minus == 0)) {
        for (int i = (nbr < 0 ); i < flgs->width - tmp; i++)
            add_buffer(&buf_u, "0", 1);
    }
}

int u_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    unsigned int nbr = va_arg(args, unsigned int);
    char *buf_u = my_put_unbr(nbr);
    int tmp = my_strlen(buf_u);

    if (nbr == 0 && flgs->precision == 0)
        return (0);
    my_revstr(buf_u);
    u_format_f2(&buf_u, nbr, flgs);
    my_revstr(buf_u);
    if (tmp < flgs->width) {
        if (flgs->has_minus == 0)
            my_revstr(buf_u);
        for (int i = 0; i < flgs->width - tmp; i++)
            add_buffer(&buf_u, " ", 1);
        if (flgs->has_minus == 0)
            my_revstr(buf_u);
    }
    add_buffer(buffer, buf_u, my_strlen(buf_u));
}
