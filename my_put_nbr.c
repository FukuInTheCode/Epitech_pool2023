/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

static void my_min_put(void)
{
    my_printstr("-2147483648");
}

static void my_print(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    for (; nb != 0; nb = (nb - nb % 10) / 10) {
        rev_nb += nb % 10;
        rev_nb *= 10;
    }
    rev_nb /= 10;
    for (; rev_nb != 1; rev_nb = (rev_nb - rev_nb % 10) / 10)
        my_putchar(48 + rev_nb % 10);
}

int my_put_nbr(int nb)
{
    long rev_nb = 10;

    if (nb == MIN_INTEGER) {
        my_min_put();
        return 0;
    }
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    return 0;
}
