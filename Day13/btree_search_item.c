/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "my.h"

void *btree_search_item(btree_t const *root,
    void const *data_ref, int(*cmpf)())
{
    int tmp = 0;

    if (!root)
        return NULL;
    tmp = cmpf(root->item, data_ref);
    if (tmp == 0)
        return (void *)root;
    if (tmp < 0)
        return btree_search_item((void *)(root->right), data_ref, cmpf);
    return btree_search_item((void *)(root->left), data_ref, cmpf);
}
