/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "my.h"

size_t btree_level_count(btree_t const *root)
{
    size_t left_count = 0;
    size_t right_count = 0;

    if (!root)
        return 0;
    left_count = btree_level_count((void *)(root->left));
    right_count = btree_level_count((void *)(root->right));

    return 1 + left_count * (left_count >= right_count) +
        right_count * (left_count < right_count);
}
