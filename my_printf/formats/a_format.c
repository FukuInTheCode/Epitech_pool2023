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
    add_buffer(&buf_a, ".", 1) <= INT_MAX && my_revstr(buf_a);
    add_buffer(&buf_a, "x0", 2) <= INT_MAX && my_revstr(buf_a);
    for (int i = 0; i++ < precision; mantissa -= (int)mantissa) {
        mantissa *= 16;
        add_buffer(&buf_a, base + (int)(mantissa + .5), 1);
    }
    call_di_format(&buf_a, expo);
    add_buffer(buffer, buf_a, my_strlen(buf_a));
    free(buf_a);
    return 0;
}
