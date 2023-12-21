/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(),
    void const *data_ref, int(*cmp)())
{
    for (; begin; begin = begin->next) {
        if ((*cmp)(begin->data, data_ref) != 0)
            continue;
        (*f)(begin->data);
    }
    return 0;
}
