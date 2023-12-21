/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"


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

    for (int i = 0; names[i]; i++) {
        add_buffer(buffer, names[i], my_strlen(names[i]));
        add_buffer(buffer, size_str[0], my_strlen(size_str[0]));
        add_buffer(buffer, " ", 1);
        add_buffer(buffer, size_str[1], my_strlen(size_str[1]));
    }
    return 0;
}
