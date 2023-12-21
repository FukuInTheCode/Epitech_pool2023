/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"

static int verrify_3(int size[2], int x, int y, char c)
{
    int l = size[0];
    int h = size[1];

    if (x == l && c == '\n')
        return 0;
    if ((x == 0 || x == l - 1 || y == 0 || y == h - 1) && c == 'B')
        return 0;
    if (x == 0 && (y == 0 || y == h - 1) && c == 'A')
        return 0;
    if (x == l - 1 && (y == h - 1 || y == 0) && c == 'C')
        return 0;
    if (x != 0 && x != l - 1 && y != 0 && y != h - 1 && c == ' ')
        return 0;
    return 1;
}

static int is_correct_3(char *str, int size[2])
{
    int l = size[0];
    int h = size[1];
    int error = 0;

    for (int y = 0; y != h; y++)
        for (int x = 0; x != l + 1; x++)
            error += verrify_3(size, x, y, str[x + (l + 1) * y]);
    if (error != 0)
        return 84;
    return 0;
}

int rush1_3(char **buffer, char *input, int size[2])
{
    char *name = "[rush1-3] ";
    char *size_str[] = {
        my_put_nbr(size[0]),
        my_put_nbr(size[1])
    };

    if (is_correct_2(input, size) == 84)
        return 0;
    add_buffer(buffer, name, my_strlen(name));
    add_buffer(buffer, size_str[0], my_strlen(size_str[0]));
    add_buffer(buffer, " ", 1);
    add_buffer(buffer, size_str[1], my_strlen(size_str[1]));
    return 0;
}
