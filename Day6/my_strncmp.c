/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    char str1[2] = {0};
    char str2[2] = {0};

    if (n < 0)
        return my_strcmp(s1, s2);
    for (int i = 0; i < n; i++) {
        str1[0] = s1[i];
        str2[0] = s2[i];
        if (my_strcmp(str1, str2) != 0)
            return my_strcmp(str1, str2);
    }
    return 0;
}
