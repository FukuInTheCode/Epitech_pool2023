/*
** EPITECH PROJECT, 2023
** my_printf c format
** File description:
** Placeholder
*/

#include "my.h"

int c_format_f(char **buffer, va_list args, my_flags_t *flgs)
{
    char *this_buf = malloc(1);
    char argu = (char)va_arg(args, int);

    if (!this_buf)
        return -1;
    this_buf[0] = 0;
    for (int i = 0; i++ < flgs->width - 1; add_buffer(&this_buf, " ", 1));
    add_buffer(&this_buf, &argu, 1);
    if (flgs->has_minus)
        my_revstr(this_buf);
    add_buffer(buffer, this_buf, my_strlen(this_buf));
    free(this_buf);
    return 0;
}
