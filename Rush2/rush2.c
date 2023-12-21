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

static int is_alpha(char c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
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
    double letter_count = 0;

    for (int i = 0; str[i]; i++)
        letter_count += is_alpha(str[i]);
    return (n / letter_count);
}
