/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"

static int verif_line(int size[2], int x, int y, char c)
{
    int l = size[0];
    int h = size[0];

    if (x == l && c == '\n')
        return 0;
    if (l == 1 || h == 1)
        if ((x == 0 || x == l - 1 || y == 0 || y == h - 1) && c == 'B')
            return 0;
    return 1;
}

static int is_a_line(char *str, int size[2])
{
    int l = 0;
    int h = 0;
    int error = 0;

    for (int y = 0; y != h; y++)
        for (int x = 0; x != l; x++)
            error = verif_line(size, x, y, str[x + (l + 1) * y]);
    if (error != 0)
        return 84;
    return 1;
}

int rush1_345_line(char **buffer, char *input, int size[2])
{
    char *names[] = {
        "[rush1-3] ",
        " || [rush1-4] ",
        " || [rush1-5] ",
        NULL
    };
    char *size_str[] = {
        my_put_nbr(size[0]),
        my_put_nbr(size[1])
    };

    if (is_a_line(input, size) == 84)
        return 0;
    for (int i = 0; names[i]; i++) {
        add_buffer(buffer, names[i], my_strlen(names[i]));
        add_buffer(buffer, size_str[0], my_strlen(size_str[0]));
        add_buffer(buffer, " ", 1);
        add_buffer(buffer, size_str[1], my_strlen(size_str[1]));
    }
    return 0;
}
