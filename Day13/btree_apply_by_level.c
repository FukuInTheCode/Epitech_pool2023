/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#include "my.h"

static void apply_on_elmt(btree_t *node, void(*applyf)(),
    int level, int *arr)
{
    if (!node)
        return;
    applyf(node->item, level, arr[level]);
    arr[level] = 0;
    apply_on_elmt((void *)(node->left), applyf, level + 1, arr);
    apply_on_elmt((void *)(node->right), applyf, level + 1, arr);
}

void btree_apply_by_level(btree_t *root,
    void(*applyf)(void *, int, int))
{
    size_t level_count = 0;
    int *is_first_elmt_arr = NULL;

    if (!root)
        return;
    level_count = btree_level_count((void *)root);
    is_first_elmt_arr = malloc(sizeof(int) * level_count);
    if (!is_first_elmt_arr)
        return;
    for (size_t i = 0; i < level_count; is_first_elmt_arr[i++] = 1);
    apply_on_elmt((void *)root, applyf, 0, is_first_elmt_arr);
    free(is_first_elmt_arr);
}
