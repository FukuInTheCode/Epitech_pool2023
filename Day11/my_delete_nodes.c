/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref,
    int(*cmp)())
{
    linked_list_t *before = *begin;

    for (linked_list_t *tmp = before->next; tmp; tmp = tmp->next) {
        if (cmp(tmp->data, data_ref)) {
            before = tmp;
            continue;
        }
        before->next = tmp->next;
    }
    if (!cmp((*begin)->data, data_ref))
        *begin = (*begin)->next;
    return 0;
}
