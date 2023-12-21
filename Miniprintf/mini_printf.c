/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** Placeholder
*/

#include "include/my.h"

static int is_flags(char const *format, int *i)
{
    if (!my_strncmp())
}

int mini_printf(char const *format, ...)
{
    va_list args;
    int ret = 0;

    va_start(args, format);
    for (int i = 0; format[i]; ret += is_flags(format, &i));
    return ret;
}
