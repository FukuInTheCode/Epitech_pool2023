/*
** EPITECH PROJECT, 2023
** Cpool n format
** File description:
** Placeholder
*/

#include "my.h"

int zn_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    size_t *var = va_arg(args, size_t *);

    *var = my_strlen(*buffer);
    return 0;
}
