/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != 0; i++)
        str[i] += ('A' - 'a') * ('a' <= str[i] && str[i] <= 'b')
    return str;
}
