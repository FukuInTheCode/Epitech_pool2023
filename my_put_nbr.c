/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long rev_nb;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    rev_nb = 0;
    for (; nb != 0; nb = (nb - nb % 10) / 10) {
        rev_nb += nb % 10;
        rev_nb *= 10;
    }
    rev_nb /= 10;
    for (; rev_nb != 0; rev_nb = (rev_nb - rev_nb % 10) / 10)
        my_putchar(48 + rev_nb % 10);
    return 0;
}
