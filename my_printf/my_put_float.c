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
        printf("%lf -> %s\n", ln, buf);
    }
    ln *= 10;
    precision && add_buffer(&buf, ".", 1);
    printf("bet = %lf -> %s\n", ln, buf);
    for (int i = 0; i < precision; i++) {
        ln *= 10;
        tmp = '0' + (int)ln % 10;
        add_buffer(&buf, &tmp, 1);
        printf("%lf -> %s\n", ln, buf);
    }
    return buf;
}
