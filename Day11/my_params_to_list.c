/*
** EPITECH PROJECT, 2023
** Pool Day 11
** File description:
** Placeholder
*/

#include "include/my.h"

static void link_next(linked_list_t **list, char const *arg)
{
    linked_list_t *tmp= malloc(sizeof(linked_list_t));

    if (tmp == NULL)
        return;
    tmp->data = (void *)arg;
    tmp->next = *list;
    *list = tmp;
}

linked_list_t *my_params_to_list(int ac, char const **av)
{
    linked_list_t *ret = malloc(sizeof(linked_list_t));

    if (ret == NULL)
        return NULL;
    ret->data = (void *)(av[0]);
    ret->next = NULL;
    for (int i = 1; i < ac; link_next(&ret, av[i++]));
    return ret;
}

