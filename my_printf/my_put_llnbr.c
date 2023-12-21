/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** new my_put_nbr for myprintf
*/

#include "my.h"

char *my_put_llnbr(long long nb)
{
    char *buffer = malloc(1);
    char tmp;
    uint64_t nb2 = nb;

    buffer[0] = 0;
    if (nb < 0)
        nb2 = -nb;
    if (nb == 0 || nb == -0)
        add_buffer(&buffer, "0", 1);
    for (; nb2 != 0 ; nb2 = nb2 / 10) {
        tmp = (nb2 % 10) + 48;
        add_buffer(&buffer, &tmp, 1);
    }
    my_revstr(buffer);
    return (buffer);
}
