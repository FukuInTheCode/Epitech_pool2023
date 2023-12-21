/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "btree.h"

void btree_apply_prefix(btree_t *root, int(*applyf)(void *))
{
    if (!root)
        return;
    apply(root->data);
    btree_apply_prefix(root->left, applyf);
    btree_apply_prefix(root->right, applyf);
}
