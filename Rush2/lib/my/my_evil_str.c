/*
** EPITECH PROJECT, 2023
** Pool Day 04
** File description:
** Placeholder
*/

#include "../../include/my.h"

char *my_evil_str(char *str)
{
    int len = my_strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return &(str[0]);
}
