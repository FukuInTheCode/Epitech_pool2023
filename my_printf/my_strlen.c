/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "include/my.h"

int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len]; len++);
    return len;
}
