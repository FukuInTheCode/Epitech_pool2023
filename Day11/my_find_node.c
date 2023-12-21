/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
    int (*cmp)())
{
    linked_list_t *tmp = begin;

    for (; tmp; tmp = tmp->next) {
        if (!(*cmp)(tmp->data, data_ref))
            return tmp;
    }
    return NULL;
}
