/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

int my_list_size(linked_list_t const *begin)
{
    int ret = 0;

    for (; begin; begin = (begin + ret - ret++)->next);
    return ret;
}
