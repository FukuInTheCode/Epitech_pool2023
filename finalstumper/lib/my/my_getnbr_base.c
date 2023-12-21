/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../../include/rush3.h"

static int find_power(char c, char const *base)
{
    if (c == '-' || c == '+')
        return -2;
    for (int i = 0; base[i]; i++) {
        if (base[i] == c)
            return i;
    }
    return -1;
}

static char get_sign(char const *str, char const *base)
{
    char sign = 1;

    for (int i = 0; str[i] && find_power(str[i], base) == -2; i++)
        sign *= (str[i] == '+') - (str[i] == '-');
    return sign;
}

int my_getnbr_base(char const *str, char const *base)
{
    long ret = 0;
    int id;
    char sign = 1;
    int len = 0;

    sign = get_sign(str, base);
    for (; base[len] != '\0'; len++)
        continue;
    for (int i = 0; str[i] != '\0'; i++) {
        id = find_power(str[i], base);
        if (id == -1)
            break;
        if (id == -2)
            continue;
        ret = ret * len + id;
        if (MAX_INTEGER < ret * sign || ret * sign < MIN_INTEGER)
            return 0;
    }
    return sign * ret;
}
