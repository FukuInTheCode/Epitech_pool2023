/*
** EPITECH PROJECT, 2023
** my_printf F format
** File description:
** F
*/

#include "my.h"

static int f_format_f2(char **buf_f, double nbr, my_flags_t *flgs)
{
    int tmp = my_strlen(*buf_f);

    if (tmp < flgs->precision)
        for (int i = 0; i < flgs->precision - tmp; i++)
            add_buffer(buf_f, "0", 1);
    if (my_strlen(*buf_f) < flgs->width
        && (flgs->has_zero == 1) && (flgs->has_minus == 0)) {
        for (int i = (nbr < 0 || flgs->has_plus); i < flgs->width - tmp; i++)
            add_buffer(buf_f, "0", 1);
    }
    if (nbr < 0)
        add_buffer(buf_f, "-", 1);
    if (flgs->has_plus && nbr >= 0)
        add_buffer(buf_f, "+", 1);
    if (flgs->has_space == 1 && flgs->has_plus == 0 && nbr >= 0)
        add_buffer(buf_f, " ", 1);
    return (0);
}

static void init_buf(double nbr, my_flags_t *flgs, char **buf_f)
{
    int lim;

    if (flgs->precision == -1)
        lim = 6;
    else
        lim = flgs->precision;
    if (nbr == 0 && flgs->precision == 0) {
        *buf_f = malloc(1);
        **buf_f = 0;
    } else {
        *buf_f = my_put_float(nbr, lim);
    }
}

int f_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    int tmp_len;
    char *buf_f;

    init_buf(nbr, flgs, &buf_f);
    if (!buf_f)
        return (84);
    my_revstr(buf_f) && f_format_f2(&buf_f, nbr, flgs);
    my_revstr(buf_f);
    tmp_len = my_strlen(buf_f);
    if (tmp_len < flgs->width) {
        (flgs->has_minus == 0) && my_revstr(buf_f);
        for (int i = 0; i < flgs->width - tmp_len; i++)
            add_buffer(&buf_f, " ", 1);
        if (flgs->has_minus == 0)
            my_revstr(buf_f);
    }
    add_buffer(buffer, buf_f, my_strlen(buf_f));
    free(buf_f);
    return 0;
}
