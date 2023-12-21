/*
** EPITECH PROJECT, 2023
** Cpool n format
** File description:
** Placeholder
*/

#include "my.h"

int hhn_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    char *var = va_arg(args, char *);

    *var = my_strlen(*buffer);
    return 0;
}
