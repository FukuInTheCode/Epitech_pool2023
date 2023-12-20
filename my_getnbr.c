/*
** EPITECH PROJECT, 2023
** Pool Day 04
** File description:
** Placeholder
*/

#include "my.h"

static char is_int_stred(char c)
{
    return ('0' <= c && c <= '9');
}

int my_getnbr(char const *str)
{
    int len = my_strlen(str);
    char has_started = 0;
    char sign = 1;
    long abs_ret = 0;

    for (int i = 0; i < len; i++) {
        if (has_started == 1 && is_int_stred(str[i]) == 0)
            break;
        if (str[i] == '-')
            sign = -1;
        if (has_started == 0 && str[i] != '-' && is_int_stred(str[i]) == 0)
            sign = 1;
        if (is_int_stred(str[i]) == 1) {
            abs_ret = (abs_ret + str[i] - '0') * 10;
            has_started = 1;
        }
    }
    abs_ret /= 10;
    if (sign * abs_ret > MAX_INTEGER || sign * abs_ret < MIN_INTEGER)
        return 0;
    return sign * abs_ret;
}
