/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

void my_add_in_sorted_list(linked_list_t **begin, void *data, int(*cmp)())
{
    linked_list_t *added = malloc(sizeof(linked_list_t));

    added->next = NULL;
    added->data = data;
    my_concat_list(begin, added);
    my_sort_list(begin, cmp);
}
