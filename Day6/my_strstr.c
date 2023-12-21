/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int len = 0;

    for (; to_find[len] != '\0'; len++)
        continue;
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_strncmp(str + i, to_find, len) == 0)
            return str + i;
    }
    return 0;
}
