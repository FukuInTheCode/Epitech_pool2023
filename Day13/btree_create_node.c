/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "my.h"

btree_t *btree_create_node(void *item)
{
    btree_t *ret = malloc(sizeof(btree_t));

    ret->item = item;
    ret->left = NULL;
    ret->right = NULL;
    return ret;
}
