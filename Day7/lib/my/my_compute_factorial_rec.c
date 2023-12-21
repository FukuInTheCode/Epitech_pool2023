/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/


#include "my.h"

static long my_recursif(int n, int i)
{
    long ret;

    if (i == n)
        return i;
    ret = i * my_recursif(n, i + 1);
    return ret * (MAX_INTEGER >= ret && ret >= MIN_INTEGER);
}

int my_compute_factorial_rec(int nb)
{
    if (nb <= 0)
        return (nb == 0);
    return (int)my_recursif(nb, 1);
}
