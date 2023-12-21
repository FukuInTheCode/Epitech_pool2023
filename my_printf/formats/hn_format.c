/*
** EPITECH PROJECT, 2023
** Cpool n format
** File description:
** Placeholder
*/

#include "my.h"

int hn_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    short *var = va_arg(args, short *);

    *var = my_strlen(*buffer);
    return 0;
}
