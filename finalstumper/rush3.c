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
    int size[2] = {0};
    char *buffer = malloc(1);

    if (!buffer)
        return 84;
    *buffer = 0;
    count(input, size);
    for (int i = 0; corner_0[i].s;)
        (!my_strncmp(corner_0[i++].s, input, 1) &&
        corner_0[i - 1].f(&buffer, input, size) <= INT_MAX));
    if (!my_strlen(buffer))
        add_buffer(&buffer, "none", 4);
    add_buffer(&buffer, "\n", 1);
    write(1, buffer, my_strlen(buffer));
    return 0;
}
