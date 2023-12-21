/*
** EPITECH PROJECT, 2023
** my_printf a format
** File description:
** Placeholder
*/

#include "../include/my.h"

static int call_di_format(char **buffer, ...)
{
    va_list args;
    my_flags_t flgs = { false, false, false, true, false, -1, -1 };

    va_start(args, buffer);
    add_buffer(buffer, "p", 1);
    di_format_f(buffer, args, &flgs);
    va_end(args);
    return 0;
}

static int formating_buffer(char **buffer, int nbr, my_flags_t *flgs)
{
    int len;

    my_revstr(*buffer);
    add_buffer(buffer, "x0", 2);
    (nbr < 0) && add_buffer(buffer, "-", 1);
    nbr >= 0 && flgs->has_plus && add_buffer(buffer, "+", 1);
    my_revstr(*buffer);
    len = my_strlen(*buffer);
    !flgs->has_minus && my_revstr(*buffer);
    for (int i = 0; i++ < flgs->width - len; add_buffer(buffer, " ", 1));
    !flgs->has_minus && my_revstr(*buffer);
    return 0;
}

int a_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = my_fexpn(nbr, 2, &mantissa);
    int precision = (13 * (flgs->precision == -1)) +
        (flgs->precision * (flgs->precision != -1));
    char *buf_a = my_put_float(1., 0);
    char *base = "0123456789abcdef";

    mantissa -= 1.;
    add_buffer(&buf_a, ".", 1);
    for (int i = 0; i++ < precision; mantissa -= (int)mantissa) {
        mantissa *= 16;
        add_buffer(&buf_a, base + (int)(mantissa), 1);
    }
    call_di_format(&buf_a, expo);
    formating_buffer(&buf_a, nbr, flgs);
    add_buffer(buffer, buf_a, my_strlen(buf_a));
    free(buf_a);
    return 0;
}
