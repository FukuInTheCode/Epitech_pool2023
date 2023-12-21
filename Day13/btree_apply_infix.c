/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "my.h"

void btree_apply_infix(btree_t *root, int(*applyf)(void *))
{
    if (!root)
        return;
    btree_apply_infix(root->left, applyf);
    applyf(root->item);
    btree_apply_infix(root->left, applyf);
}
