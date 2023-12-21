/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "my.h"

int my_str_isnum(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || '9' < str[i])
            return 0;
    }
    return 1;
}
