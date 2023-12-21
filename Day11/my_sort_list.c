/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

static void sort_list(linked_list_t **begin, int(*cmp)())
{
    void *tmp;

    for (linked_list_t *tmp1 = (*begin); tmp1->next; tmp1 = tmp1->next) {
        if (cmp(tmp1->data, tmp1->next->data) < 1)
            continue;
        tmp = tmp1->data;
        tmp1->data = tmp1->next->data;
        tmp1->next->data = tmp;
    }
}

void my_sort_list(linked_list_t **begin, int(*cmp)())
{
    for (linked_list_t *tmp = (*begin); tmp->next; tmp = tmp->next)
        sort_list(begin, cmp);
}
