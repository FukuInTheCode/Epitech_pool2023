/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len++;
    return len;
}
