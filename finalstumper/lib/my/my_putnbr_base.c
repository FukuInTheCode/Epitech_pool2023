/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../../include/my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int len = 0;
    char new_n[32] = {'\0'};
    int i = 0;
    long n = nbr;

    for (int i = 0; base[i] != '\0'; i++)
        len++;
    if (len == 0 || len == 1)
        return 0;
    if (n == 0)
        write(1, base, 1);
    if (n < 0) {
        write(1, "-", 1);
        n *= -1;
    }
    for (; n != 0; n /= len)
        new_n[i++] = base[n % len];
    for (int j = i - 1; j >= 0; j--)
        write(1, new_n + j, 1);
    return 0;
}
