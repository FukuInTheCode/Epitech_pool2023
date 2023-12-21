/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "my.h"

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' && 'z' > str[i])
            return 0;
        if (str[i] < 'A' && 'Z' > str[i])
            return 0;
    }
    return 1;
}
