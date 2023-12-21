/*
** EPITECH PROJECT, 2023
** my_printf c format
** File description:
** Placeholder
*/

#include "../include/my.h"

int c_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    char argu = (char)va_arg(args, int);

    add_buffer(buffer, &argu, 1);
    return 0;
}
