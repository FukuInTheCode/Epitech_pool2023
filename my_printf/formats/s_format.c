/*
** EPITECH PROJECT, 2023
** my_printf s format
** File description:
** s
*/

#include "../include/my.h"

int s_format_f(char ** buffer, va_list args, my_flgs_t *flgs)
{
    char *tmp = va_arg(args, char *);

    if (flgs->precision == -1 || flgs->precision > my_strlen(tmp)) {
       add_buffer(buffer, tmp, my_strlen(tmp));
    } else {
        add_buffer(buffer, tmp, flgs->precision);
    }
    return (0);
}
