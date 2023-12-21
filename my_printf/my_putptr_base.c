/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

char *my_putptr_base(size_t n, char *base)
{
    int len = my_strlen(base);
    char *buf = malloc(1);

    *buf = 0;
    if (len == 0 || len == 1 || !buf)
        return NULL;
    if (n == 0)
        add_buffer(&buf, base, 1);
    for (; n != 0; n /= len)
        add_buffer(&buf, base + n % len, 1);
    return my_revstr(buf);
}
