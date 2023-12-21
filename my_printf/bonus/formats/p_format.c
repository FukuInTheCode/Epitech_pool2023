/*
** EPITECH PROJECT, 2023
** my_printf p format
** File description:
** p
*/

#include "my.h"

int p_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    size_t nbr = va_arg(args, size_t);
    char *buf_p = my_putptr_base(nbr, "0123456789abcdef");

    my_revstr(buf_p);
    add_buffer(&buf_p, "x0", 2);
    my_revstr(buf_p);
    add_buffer(buffer, buf_p, my_strlen(buf_p));
    free(buf_p);
    return (0);
}
