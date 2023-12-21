/*
** EPITECH PROJECT, 2023
** Cpool n format
** File description:
** Placeholder
*/

#include "my.h"

int lln_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    long long *var = va_arg(args, long long *);

    *var = my_strlen(*buffer);
    return 0;
}
