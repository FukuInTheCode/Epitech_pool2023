/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    char s1_cpy[n + 1];
    char s2_cpy[n + 1];

    my_strncpy(s1_cpy, s1, n);
    my_strncpy(s2_cpy, s2, n);
    return my_strcmp(s1_cpy, s2_cpy);
}
