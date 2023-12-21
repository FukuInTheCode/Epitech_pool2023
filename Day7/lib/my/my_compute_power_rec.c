/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "../../include/my.h"

static long my_recursif(int nb, int p, int i)
{
    long ret;

    if (i == p)
        return nb;
    if (p == 0)
        return 1;
    ret = nb * my_recursif(nb, p, i + 1);
    return ret * (MAX_INTEGER >= ret && ret >= MIN_INTEGER);
}

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    return (int)my_recursif(nb, p, 1);
}
