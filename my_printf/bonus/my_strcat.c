/*
** EPITECH PROJECT, 2023
** Pool Day 07
** File description:
** Placeholder
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int len2 = my_strlen(src);

    for (int i = 0; src[i]; i++)
        dest[len + i] = src[i];
    dest[len + len2] = '\0';
    return dest;
}
