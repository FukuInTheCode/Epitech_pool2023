/*
** EPITECH PROJECT, 2023
** Cpool g format
** File description:
** Placeholder
*/

#include "../include/my.h"

static int call_e(my_flags_t *flgs, char **buffer, ...)
{
    va_list args;

    va_start(args, buffer);
    e_format_f(buffer, args, flgs);
    va_end(args);
    return 0;
}

static int call_f(my_flags_t *flgs, double nbr, char **buffer, ...)
{
    va_list args;
    double mantissa;
    int expo = my_fexpn(nbr, 10, &mantissa);
    int save_p;

    va_start(args, buffer);
    flgs->precision -= expo * (expo > 0) + 1;
    save_p = flgs->precision;
    for (int i = 0; i++ <= expo; mantissa = (mantissa -
        (int)mantissa) * 10.);
    for (int i = 0; i++ < save_p; mantissa *= 10) {
        ((int)(mantissa + .5) % 10 == 0) && flgs->precision--;
        ((int)(mantissa + .5) % 10 != 0) && (flgs->precision = save_p);
        mantissa -= (int)(mantissa + .5);
    }
    f_format_f(buffer, args, flgs);
    va_end(args);
    return 0;
}

int g_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    double nbr = va_arg(args, double);
    double mantissa;
    int expo = my_fexpn(nbr, 10, &mantissa);
    char *buf_g = malloc(1);

    *buf_g = 0;
    flgs->precision = 6 * (flgs->precision == -1) +
        flgs->precision * (flgs->precision > 0) +
        (flgs->precision == 0);
    if (expo < -4 || expo >= flgs->precision)
        call_e(flgs, &buf_g, nbr);
    else
        call_f(flgs, nbr, &buf_g, nbr);
    add_buffer(buffer, buf_g, my_strlen(buf_g));
    free(buf_g);
    return 0;
}
