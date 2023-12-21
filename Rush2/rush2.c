/*
** EPITECH PROJECT, 2023
** rush 2
** File description:
** rush2
*/

#include "include/my.h"

static char to_lower(char a)
{
    if ('A' <= a && a <= 'Z')
        return a + 'a' - 'A';
    return a;
}

int rush_count(char *str, char a)
{
    int j = 0;

    for (int i = 0; str[i]; i++)
        j += (to_lower(str[i]) == to_lower(a));
    return j;
}

double rush_frequence(char *str , double n)
{
    return (n / my_strlen(str));
}
