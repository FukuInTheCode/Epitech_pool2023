/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"


int rush1_345(char **buffer, char *input, int size[2])
{
    for (int i = 0; corner_1[i].s;)
        (!my_strncmp(input + size[0] - 1, corner_1[i++].s, 1) &&
        corner_1[i - 1].f(buffer, input, size));
    return 0;
}
