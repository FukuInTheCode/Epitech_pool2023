/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

static void my_min_put(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

static void my_print(int nb)
{
    long rev_nb = 10;

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
    if (nb == MIN_INTEGER) {
        my_min_put();
        return 0;
    }
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    my_print(nb);
    return 0;
}
