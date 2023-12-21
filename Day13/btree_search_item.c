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
    void *tmp1;
    void *tmp2;

    if (!root)
        return NULL;
    if (cmpf(root->item, data_ref) == 0)
        return root->item;
    tmp1 = btree_search_item((btree_t const *)(root->left), data_ref, cmpf);
    if (tmp1)
        return tmp1;
    tmp2 = btree_search_item((btree_t const *)(root->right), data_ref, cmpf);
    if (tmp2)
        return tmp1;
    return NULL;
}
