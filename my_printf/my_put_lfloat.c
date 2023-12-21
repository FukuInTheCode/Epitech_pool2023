/*
** EPITECH PROJECT, 2023
** my_printf put_float
** File description:
** Placeholder
*/

#include "my.h"

char *my_put_lfloat(long double n, int precision)
{
    char *buf = malloc(1);
    char tmp;
    int before = n * ((n >= 0) - (n < 0));
    long double after = (n * ((n >= 0) - (n < 0)) - before);

    if (!buf)
        return NULL;
    *buf = 0;
    n == 0 && add_buffer(&buf, "0", 1);
    for (; before; before /= 10)
        (tmp = '0' + before % 10) && add_buffer(&buf, &tmp, 1);
    my_revstr(buf);
    precision && add_buffer(&buf, ".", 1);
    for (int i = 0; i < precision; i++) {
        after *= 10;
        tmp = '0' + (int)after % 10;
        add_buffer(&buf, &tmp, 1);
        after -= (int)after % 10;
    }
    return buf;
}
