/*
** EPITECH PROJECT, 2023
** Pool Day 13
** File description:
** Placeholder
*/


#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include "btree.h"

btree_t *btree_create_node(void *);
void btree_apply_prefix(btree_t *, int(*)(void *));
void btree_insert_data(btree_t **, void *, int(*)());
void *btree_search_item(btree_t const *, void const *, int(*)());
void *btree_level_count(btree_t const *);
#endif
