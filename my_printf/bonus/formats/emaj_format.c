/*
** EPITECH PROJECT, 2023
** my_printf e format
** File description:
** Placeholder
*/

#include "my.h"

static void call_di_format(char **buffer, ...)
{
    va_list args;
    my_flags_t flgs = { true, false, false, true, false, -1, 2 };

    va_start(args, buffer);
    di_format_f(buffer, args, &flgs);
    va_end(args);
}

int emaj_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = my_fexpn(nbr, 10, &mantissa);
    char *buf_e = my_put_float(mantissa, (6 - flgs->precision) *
        (flgs->precision == -1) + flgs->precision);

    add_buffer(&buf_e, "E", 1);
    call_di_format(&buf_e, expo);
    add_buffer(buffer, buf_e, my_strlen(buf_e));
    free(buf_e);
    return 0;
}
