/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int len = 0;

    for (int i = 0; base[i] != '\0'; i++)
        len++;
    if (len == 10)
        return my_put_nbr(nbr);
    if (nbr == 0)
        write(1, base, 1);
    if (nbr < 0) {
        write(1, "-", 1);
        nbr *= -1;
    }
    for (; nbr != 0; nbr = nbr / len)
        write(1, base + (nbr % len), 1);
    return 0;
}
