/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "include/my.h"

static void convert_to_base_to(long n, char *new_n, char const *base_to)
{
    int i = 0;
    int len = 0;

    for (int j = 0; base_to[j] != '\0'; j++)
        len++;
    if (n < 0) {
        new_n[i++] = '-';
        n *= -1;
    }
    for (; n != 0; n /= len)
        new_n[i++] = base_to[n % len];
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    long n = my_getnbr_base(nbr, base_from);
    char *new_n = malloc(33);
    int len = 0;

    for (int j = 0; base_to[j] != '\0'; j++)
        len++;
    for (int i = 0; i < 33; i++)
        new_n[i] = 0;
    if (len == 0 || len == 1)
        return NULL;
    if (n == 0) {
        new_n[0] = base_to[0];
        return new_n;
    }
    convert_to_base_to(n, new_n, base_to);
    my_revstr(new_n + (new_n[0] == '-'));
    return new_n;
}
