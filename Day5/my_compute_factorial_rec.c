/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/


#include "my.h"

static int my_recursif(int n, int i)
{
    if (i == n)
        return i;
    return i * my_recursif(n, i + 1);
}

int my_compute_factorial_rec(int nb)
{
    if (nb <= 0)
        return (nb == 0);
    return my_recursif(nb, 1);
}
