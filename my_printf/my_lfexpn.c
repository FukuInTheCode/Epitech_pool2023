/*
** EPITECH PROJECT, 2023
** my_printf fexpn
** File description:
** Placeholder
*/

#include "my.h"

int my_lfexpn(long double x, int n, long double *mantissa)
{
    int ret = 0;

    x *= ((x >= 0) - (x < 0));
    for (; x >= (long double)n && x != 0.; x /= (long double)n)
        ret++;
    for (; x < 1. && x != 0.; x *= (long double)n)
        ret--;
    *mantissa = x;
    return ret;
}
