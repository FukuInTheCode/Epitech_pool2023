/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** new my_put_nbr for myprintf
*/

#include "include/my.h"

char *my_put_nbr(int nb)
{
    char *buffer = malloc(1);
    char tmp;

    buffer[0] = 0;

    for (; nb != 0 ; nb = nb / 10) {
        tmp = (nb % 10) + 48;
        add_buffer(&buffer, &tmp, 1);
    }
    my_revstr(buffer);
    return(buffer);
}
