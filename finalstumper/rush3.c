/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"

int *count(char *str, int size[2])
{
    int high = 0;
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            high++;
    for (int i = 0; str[i] != '\n'; i++)
        len++;
    size[0] = len;
    size[1] = high;
    return size;
}

int rush3(char *input)
{
    char *buffer = malloc(1);

    if (!buffer)
        return 84;
    *buffer = 0;
}
