/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *))
{
    for (; begin; begin = begin->next)
        (*f)(begin->data);
    return 0;
}
