/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"


int rush1_4(char **buffer, char *input, int size[2])
{
    char *name = "[rush1-4] ";
    char *size_str[] = {
        my_put_nbr(size[0]),
        my_put_nbr(size[1])
    };

    add_buffer(buffer, name, my_strlen(name));
    add_buffer(buffer, size_str[0], my_strlen(size_str[0]));
    add_buffer(buffer, " ", 1);
    add_buffer(buffer, size_str[1], my_strlen(size_str[1]));
    return 0;
}
