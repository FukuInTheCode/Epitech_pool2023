/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "../../include/my.h"

static int find_closest_perfect_sqrt(int nb)
{
    int tmp;

    for (int i = nb; i >= 4; i--) {
        tmp = my_compute_square_root(i);
        if (tmp != 0)
            return tmp;
    }
    return 2;
}

int my_is_prime(int nb)
{
    int end_border;

    if (nb <= 1)
        return 0;
    if (nb == 2 || nb == 3)
        return 1;
    end_border = find_closest_perfect_sqrt(nb);
    for (int i = 2; i <= end_border; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
