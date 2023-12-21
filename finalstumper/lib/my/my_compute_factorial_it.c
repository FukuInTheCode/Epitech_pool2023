/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "../../include/rush3.h"

int my_compute_factorial_it(int nb)
{
    unsigned long ret = 1;

    if (nb < 0)
        return 0;
    for (int i = 1; i <= nb; i++) {
        ret *= i;
        if (ret > MAX_INTEGER)
            return 0;
    }
    return ret;
}
