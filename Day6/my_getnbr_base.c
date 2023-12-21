/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

static int find_power(char c, char const *base)
{
    if (c == '-' || c == '+')
        return -2;
    for (int i = 0; '\0' != base[i]; i++) {
        if (base[i] == c)
            return i;
    }
    return -1;
}

int my_getnbr_base(char const *str, char const *base)
{
    long ret = 0;
    int id;
    char sign = 1;
    int len = 0;

    for (; base[len] != '\0'; len++)
        continue;
    for (int i = 0; str[i] != '\0'; i++) {
        id = find_power(str[i], base);
        if (id == -1)
            break;
        if (id == -2) {
            sign *= (str[i] == '+') - (str[i] == '-');
            continue;
        }
        ret = ret * len + id;
        if (MAX_INTEGER <= ret || ret <= MIN_INTEGER)
            return 0;
    }
    return sign * ret;
}
