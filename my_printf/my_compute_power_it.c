/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "include/my.h"

int my_compute_power_it(int nb, int p)
{
    long ret = 1;

    if (p < 0)
        return 0;
    for (int i = 1; i <= p; i++) {
        ret *= nb;
        if (ret > INT_MAX || ret < INT_MIN)
            return 0;
    }
    return ret;
}
