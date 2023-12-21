/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../../include/my.h"

int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || 'z' < str[i])
            return 0;
    }
    return 1;
}
