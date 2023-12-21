/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb <= 0)
        return 2;
    for (int i = nb; i <= MAX_INTEGER; i++) {
        if (my_is_prime(i) == 1)
            return i;
    }
    return 0;
}
