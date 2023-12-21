/*
** EPITECH PROJECT, 2023
** my_printf a format
** File description:
** Placeholder
*/

#include "my.h"

static int call_di_format(char **buffer, ...)
{
    va_list args;
    my_flags_t flgs = { false, false, false, true, false, -1, -1 };

    va_start(args, buffer);
    add_buffer(buffer, "P", 1);
    di_format_f(buffer, args, &flgs);
    va_end(args);
    return 0;
}

static int formating_buffer(char **buffer, double nbr, my_flags_t *flgs)
{
    int len;

    my_revstr(*buffer);
    add_buffer(buffer, "X0", 2);
    (nbr < 0. || nbr == -0.) && add_buffer(buffer, "-", 1);
    nbr >= 0. && flgs->has_plus && add_buffer(buffer, "+", 1);
    nbr >= 0. && !flgs->has_plus && flgs->has_space &&
        add_buffer(buffer, " ", 1);
    my_revstr(*buffer);
    len = my_strlen(*buffer);
    !flgs->has_minus && my_revstr(*buffer);
    for (int i = 0; i++ < flgs->width - len; add_buffer(buffer, " ", 1));
    !flgs->has_minus && my_revstr(*buffer);
    return 0;
}

static int handle_mantissa(double mantissa, double nbr,
    my_flags_t *flgs, char **buf_a)
{
    int precision = (13 * (flgs->precision == -1)) +
        (flgs->precision * (flgs->precision != -1));
    char *base = "0123456789ABCDEF";

    mantissa -= 1.;
    (nbr != 0 || flgs->precision > 0) && add_buffer(buf_a, ".", 1);
    for (int i = -1 * (nbr == 0.); i++ < precision && (mantissa != 0.) &&
        (nbr != 0 || flgs->precision > 0); mantissa -= (int)mantissa)
        ((mantissa *= 16) || 1) && add_buffer(buf_a, base +
        (int)(mantissa), 1);
    return 0;
}

int amaj_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = my_fexpn(nbr, 2, &mantissa);
    char *buf_a = my_put_float(1. * (nbr != 0.), 0);

    handle_mantissa(mantissa, nbr, flgs, &buf_a);
    call_di_format(&buf_a, expo);
    formating_buffer(&buf_a, nbr, flgs);
    add_buffer(buffer, buf_a, my_strlen(buf_a));
    free(buf_a);
    return 0;
}
