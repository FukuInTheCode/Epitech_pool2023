/*
** EPITECH PROJECT, 2023
** Cpool n format
** File description:
** Placeholder
*/

#include "my.h"

int n_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    int *var = va_arg(args, int *);

    *var = my_strlen(*buffer);
    return 0;
}
