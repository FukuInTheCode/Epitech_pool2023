/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

static int gen_first(int n)
{
    int ret = 0;

    for (int i = 1; i < n; i++)
        ret = (ret + i) * 10;
    return ret;
}

static int gen_end(int n)
{
    int ret = 1;

    for (int i = 1; i <= n; i++)
        ret *= 10;
    return ret;
}

int my_print_combn(int n)
{
    my_put_nbr(gen_end(n));
    // for (int i = gen_first(n); i < 
    return 0;
}
