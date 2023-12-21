/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    long ret = 1;

    if (p < 0 || (p == 0 && nb == 0))
        return 0;
    for (int i = 1; i <= p; i++) {
        ret *= nb;
        if (ret > MAX_INTEGER || ret < MIN_INTEGER)
            return 0;
    }
    return ret;
}
