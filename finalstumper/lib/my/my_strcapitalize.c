/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../../include/rush3.h"

static char check_char(char c)
{
    if ('a' <= c && c <= 'z')
        return 0;
    if ('A' <= c && c <= 'Z')
        return 0;
    if ('0' <= c && c <= '9')
        return 0;
    return 1;
}

char *my_strcapitalize(char *str)
{
    char diff = 'A' - 'a';

    my_strlowcase(str);
    str[0] += diff * ('a' <= str[0] && str[0] <= 'z');
    for (int i = 1; str[i] != '\0'; i++) {
        if (check_char(str[i - 1]))
            str[i] += diff * ('a' <= str[i] && str[i] <= 'z');
    }
    return str;
}
