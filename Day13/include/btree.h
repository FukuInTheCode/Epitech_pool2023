/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/

#ifndef BTREE_H
    #define BTREE_H
typedef struct btree {
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

#endif
