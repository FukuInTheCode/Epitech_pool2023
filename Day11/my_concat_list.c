/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *tmp = (*begin1);

    for (; tmp->next; tmp = tmp->next);
    tmp->next = begin2;
}
