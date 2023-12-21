/*
** EPITECH PROJECT, 2023
** my_printf fexpn
** File description:
** Placeholder
*/

#include "my.h"

int my_fexpn(double x, int n, double *mantissa)
{
    int ret = 0;

    x *= ((x >= 0) - (x < 0));
    for (; x >= n && x != 0.; x /= n)
        ret++;
    for (; x < 1 && x != 0; x *= n)
        ret--;
    *mantissa = x;
    return ret;
}
