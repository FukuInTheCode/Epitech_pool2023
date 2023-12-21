/*
** EPITECH PROJECT, 2023
** my_printf e format
** File description:
** Placeholder
*/

#include "my.h"

static int formating_buffer(char **buffer, my_flags_t *flgs)
{
        size_t len = my_strlen(*buffer);

        !flgs->has_minus && my_revstr(*buffer);
        for (int i = 0; i++ < flgs->width - (int)len;
            add_buffer(buffer, " ", 1));
        !flgs->has_minus && my_revstr(*buffer);
        return 0;
}

static void call_di_format(char **buffer, ...)
{
    va_list args;
    my_flags_t flgs = { true, false, false, true, false, -1, 2 };

    va_start(args, buffer);
    di_format_f(buffer, args, &flgs);
    va_end(args);
}

int e_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = my_fexpn(nbr, 10, &mantissa);
    char *buf_e = my_put_float(mantissa, (6 - flgs->precision) *
        (flgs->precision == -1) + flgs->precision);

    add_buffer(&buf_e, "e", 1);
    call_di_format(&buf_e, expo);
    formating_buffer(&buf_e, flgs);
    add_buffer(buffer, buf_e, my_strlen(buf_e));
    free(buf_e);
    return 0;
}
