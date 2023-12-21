/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "my.h"

void btree_apply_suffix(btree_t *root, int(*applyf)(void *))
{
    if (!root)
        return;
    btree_apply_prefix(root->left, applyf);
    btree_apply_prefix(root->right, applyf);
    applyf(root->item);
}
