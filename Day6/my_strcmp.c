/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int ret;

    for (; *s1 != '\0' && (*s1 == *s2);) {
        s1++;
        s2++;
    }
    ret = *s1 - *s2;
    return (ret > 0) - (ret < 0);
}
