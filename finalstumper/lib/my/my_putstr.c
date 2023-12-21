/*
** EPITECH PROJECT, 2023
** Pool Day 04
** File description:
** Placeholder
*/

#include "../../include/rush3.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}
