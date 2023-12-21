/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int j = 0;
    int str_len = 0;
    int to_find_len = 0;
    int current_start = -1;

    for (int i = 0; str[i] != '\0'; i++)
        str_len++;
    for (int i = 0; to_find[i] != '\0'; i++)
        to_find_len++;
    for (int i = 0; i < str_len && j < to_find_len; i++) {
        if (str[i] == to_find[j] && j == 0)
            current_start = i;
        if (str[i] == to_find[j])
            j++;
        else
            current_start = -1;
    }
    if (j == to_find_len)
        return str + current_start;
    return 0;
}
