/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "include/my.h"

char *concat_params(int argc, char **argv)
{
    char *dest;
    size_t dest_len = argc;

    for (int i = 0; i < argc; i++)
        dest_len += my_strlen(argv[i]);
    dest = malloc(dest_len);
    if (dest == NULL)
        return 0;
    for (size_t i = 0; i < dest_len; i++)
        dest[i] = 0;
    for (int i = 0; i < argc; i++) {
        if (i != 0)
            dest[my_strlen(dest)] = '\n';
        my_strcat(dest, argv[i]);
    }
    return dest;
}
