/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *b2 = *begin;

    for (linked_list_t *tmp = (*begin)->next; tmp; tmp = (*begin)->next) {
        (*begin)->next = tmp->next;
        tmp->next = b2;
        b2 = tmp;
    }
    *begin = b2;
}
