/*
** EPITECH PROJECT, 2023
** my_printf put_float
** File description:
** Placeholder
*/

#include "include/my.h"

char *my_put_float(double n, int precision)
{
    char *buf = malloc(1);
    double ln = n * ((n >= 0) - (n < 0));
    char tmp;

    if (!buf)
        return NULL;
    buf[0] = 0;
    for (; ln > 1; ln = (ln - ((int)ln % 10)) / 10) {
        tmp = '0' + (int)ln % 10;
        add_buffer(&buf, &tmp, 1);
    }
    ln *= 10;
    precision && add_buffer(&buf, ".", 1);
    for (int i = 0; i < precision; i++) {
        ln *= 10;
        tmp = '0' + (int)(ln + .5);
        add_buffer(&buf, &tmp, 1);
        ln -= (int)(ln + .5);
    }
    return buf;
}
