/*
** EPITECH PROJECT, 2023
** Cpool g format
** File description:
** Placeholder
*/

#include "../include/my.h"

static int call_e_formats(my_flags_t *flgs, char **buffer, ...)
{
    va_list args;

    va_start(args, buffer);
    e_format(buffer, args, flgs);
    va_end(args);
    return 0;
}

static int call_f_formats(my_flags_t *flgs, char **buffer, ...)
{
    va_list args;

    va_start(args, buffer);
    f_format(buffer, args, flgs);
    va_end(args);
    return 0;
}

int g_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = fexpn(nbr, 10, &mantissa);
    int dprecision = 0;
    char *buf_g = malloc(1);

    *buf_g = 0;
    flgs->precision = flgs->precision * (flgs->precision > 0) +
        (flgs->precision < 1);
    for (int i = 0; i++ < flgs->precision; mantissa -= (int)mantissa)
        ((int)(mantissa + .5) % 10 == 0 && dprecision++) ||
            (dprecision = 0);
    if (expo < -4 || expo >= flgs->precision)
        (flgs->precision -= dprecision) && call_e_format(flgs,
            &buf_g, nbr);
    else
        (flgs->precision -= dprecision) && call_f_format(flgs,
            &buf_g, nbr);
    add_buffer(buffer, buf_g, my_strlen(buf_g));
    free(buf_g);
    return 0;
}
