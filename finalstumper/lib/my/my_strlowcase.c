/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] += ('a' - 'A') * ('A' <= str[i] && str[i] <= 'Z');
    return str;
}
