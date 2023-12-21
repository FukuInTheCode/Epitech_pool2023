/*
** EPITECH PROJECT, 2023
** % format
** File description:
** format % for my_printf
*/

#include "my.h"

int mod_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    add_buffer(buffer, "%", 1);
    return 0;
}
