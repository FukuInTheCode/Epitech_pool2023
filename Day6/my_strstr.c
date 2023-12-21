/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

static char is_equal(char const *str, char const *to_find)
{
    for (int i = 0; to_find[i] != '\0'; i++) {
        if (to_find[i] != str[i])
            return 0;
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    char *str_tmp = str;

    if (*to_find == '\0')
        return str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_equal(str_tmp + i, to_find) == 1)
            return str + i;
    }
    return NULL;
}
