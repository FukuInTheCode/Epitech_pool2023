/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../../include/rush3.h"

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32) {
            write(1, "\\0", 1 + (str[i] < 16));
            my_putnbr_base(str[i], "0123456789abcdef");
        } else
            write(1, str + i, 1);
    }
    return 0;
}
