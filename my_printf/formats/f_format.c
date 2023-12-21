/*
** EPITECH PROJECT, 2023
** my_printf F format
** File description:
** F
*/

#include "../include/my.h"

static int fmaj_format_f2(char **buf_di, int nbr, my_flags_t *flgs)
{
    int tmp = my_strlen(*buf_fmaj);

    if tmp < flgs->precision) {
        for (int i = 0; i < flgs->precision - tmp; i++)
            add_buffer(buf_fmaj, "0", 1);
    }
    if (my_strlen(*buf_fmaj) < flgs->width)
        && (flgs->has_zero == 1) && (flgs->has_minus == 0)) {
        for (int i = (nbr < 0 || flgs->has_plus); i < flgs->width - tmp; i++)
            add_buffer(buf_fmaj, "0", 1);
    }
    if (nbr < 0)
        add_buffer(buf_fmaj, "-", 1);
    if (flgs->has_plus && nbr >= 0)
        add_buffer(buf_fmaj, "+", 1);
    if (flgs->has_space == 1 && flgs->has_plus == 0 && nbr >= 0)
        add_buffer(buf_fmaj, " ", 1);
    return (0);
}

static void init_buf(int nbr, my_flags_t *flgs, char **buf_di)
{
    int lim;

    if (flgs->precision == -1) {
        lim = 6;
    } else {
        lim = flgs->precision;
    }
    if (nbr == 0 && flgs->precision == 0) {
        *buf_fmaj = malloc(1);
        **buf_fmaj = 0;
    } else {
        *buf_fmaj = my_put_float(nbr, lim);
    }
}

int fmaj_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    int tmp_len;
    char *buf_fmaj;

    init_buf(nbr, flgs, &buf_fmaj);
    if (!buf_fmaj)
        return (84);
    my_revstr(buf_fmaj) && fmaj_format_f2(&buf_fmaj, nbr, flgs);
    my_revstr(buf_fmaj);
    tmp_len = my_strlen(buf_fmaj);
    if (tmp_len < flgs->width) {
        (flgs->has_minus == 0) && my_revstr(buf_fmaj);
        for (int i = 0; i < flgs->width - tmp_len; i++)
            add_buffer(&buf_fmaj, " ", 1);
        if (flgs->has_minus == 0)
            my_revstr(buf_fmaj);
    }
    add_buffer(buffer, buf_fmaj, my_strlen(buf_fmaj));
    free(buf_fmaj);
    return 0;
}
