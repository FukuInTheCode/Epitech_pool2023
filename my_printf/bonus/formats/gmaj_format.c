/*
** EPITECH PROJECT, 2023
** Cpool g format
** File description:
** Placeholder
*/

#include "my.h"

static int call_e(my_flags_t *flgs, double nbr, char **buffer, ...)
{
    va_list args;
    double mantissa;
    int expo = my_fexpn(nbr, 10, &mantissa);
    int save_p;

    va_start(args, buffer);
    flgs->precision -= expo * (expo > 0) + 1;
    flgs->precision = flgs->precision * (flgs->precision >= 0);
    save_p = flgs->precision;
    for (int i = 0; i++ <= expo; mantissa = (mantissa -
        (int)my_floor(mantissa)) * 10.);
    for (int i = 0; i++ < save_p; mantissa *= 10) {
        ((int)my_floor(mantissa) % 10 == 0) && flgs->precision--;
        ((int)my_floor(mantissa) % 10 != 0) && (flgs->precision = save_p);
        mantissa -= my_floor(mantissa);
    }
    emaj_format_f(buffer, args, flgs);
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
        (int)my_floor(mantissa)) * 10.);
    for (int i = 0; i++ < save_p; mantissa *= 10) {
        ((int)my_floor(mantissa) % 10 == 0) && flgs->precision--;
        ((int)my_floor(mantissa) % 10 != 0) && (flgs->precision = save_p);
        mantissa -= my_floor(mantissa);
    }
    f_format_f(buffer, args, flgs);
    va_end(args);
    return 0;
}

int gmaj_format_f(char **buffer, va_list args, my_flags_t *flgs)
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
        call_e(flgs, nbr, &buf_g, nbr);
    else
        call_f(flgs, nbr, &buf_g, nbr);
    add_buffer(buffer, buf_g, my_strlen(buf_g));
    free(buf_g);
    return 0;
}
