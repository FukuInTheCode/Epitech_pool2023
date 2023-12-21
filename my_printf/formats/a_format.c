/*
** EPITECH PROJECT, 2023
** my_printf a format
** File description:
** Placeholder
*/

#include "../include/my.h"

static void call_di_format(char **buffer, ...)
{
    va_list args;
    my_flags_t flgs = { false, false, false, true, false, -1, -1 };

    va_start(args, buffer);
    di_format_f(buffer, args, &flgs);
    va_end(args);
}

int a_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = my_fexpn(nbr, 2, &mantissa);
    printf("%lf, %d\n", mantissa, expo);
    char *buf_e = my_put_float(mantissa, (6 - flgs->precision) *
        (flgs->precision == -1) + flgs->precision);

    my_revstr(buf_e);
    add_buffer(&buf_e, "x0", 2);
    my_revstr(buf_e);
    add_buffer(&buf_e, "p", 1);
    call_di_format(&buf_e, expo);
    add_buffer(buffer, buf_e, my_strlen(buf_e));
    free(buf_e);
    return 0;
}
