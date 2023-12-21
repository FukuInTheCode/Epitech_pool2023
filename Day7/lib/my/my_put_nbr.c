/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "../../include/my.h"

static void my_min_put(void)
{
    write(1, "-", 1);
    write(1, "2", 1);
    write(1, "1", 1);
    write(1, "4", 1);
    write(1, "7", 1);
    write(1, "4", 1);
    write(1, "8", 1);
    write(1, "3", 1);
    write(1, "6", 1);
    write(1, "4", 1);
    write(1, "8", 1);
}

static void my_print(int nb)
{
    long rev_nb = 10;
    char to_print;

    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
    }
    for (; nb != 0; nb = (nb - nb % 10) / 10) {
        rev_nb += nb % 10;
        rev_nb *= 10;
    }
    rev_nb /= 10;
    for (; rev_nb != 1; rev_nb = (rev_nb - rev_nb % 10) / 10) {
        to_print = 48 + rev_nb % 10;
        write(1, &to_print, 1);
    }
}

int my_put_nbr(int nb)
{
    if (nb == MIN_INTEGER) {
        my_min_put();
        return 0;
    }
    if (nb == 0) {
        write(1, "0", 1);
        return 0;
    }
    my_print(nb);
    return 0;
}
