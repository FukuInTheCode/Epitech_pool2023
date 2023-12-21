/*
** EPITECH PROJECT, 2023
** Pool Day 04
** File description:
** Placeholder
*/

#include "include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i]; my_putchar(str[i++]));
    return i;
}
