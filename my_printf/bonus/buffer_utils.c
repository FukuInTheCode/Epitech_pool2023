/*
** EPITECH PROJECT, 2023
** my_printf buffer utils
** File description:
** Placeholder
*/

#include "my.h"

int add_buffer(char **buffer, char *to_add, int n)
{
    char *new_buf = malloc(my_strlen(*buffer) + my_strlen(to_add) + 1);

    if (!new_buf)
        return -1;
    for (int i = 0; i < my_strlen(*buffer) + my_strlen(to_add) + 1;
        new_buf[i++] = 0);
    my_strcpy(new_buf, *buffer);
    free(*buffer);
    *buffer = my_strncat(new_buf, to_add, n);
    return 0;
}
