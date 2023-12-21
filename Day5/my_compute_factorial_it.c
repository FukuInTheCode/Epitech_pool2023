/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "my.h"

int my_compute_factorial_it(int nb)
{
    unsigned long ret = 1;

    for (int i = 2; i < nb; i++) {
        ret *= i;
        if (ret > MAX_INTEGER)
            return 0;
    }
    return ret;
}
