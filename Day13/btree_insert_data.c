/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

 #include "my.h"

void btree_insert_data(btree_t **root, void *item, int(*cmpf)())
{
    if (!root)
        return;
    if (!(*root)) {
        *root = btree_create_node(item);
        return;
    }
    if (cmpf(item, (*root)->item) < 0)
        return btree_insert_data(&((*root)->left), item, cmpf);
    return btree_insert_data(&((*root)->right), item, cmpf);
}
