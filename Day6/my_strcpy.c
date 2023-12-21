/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}
