/*
** EPITECH PROJECT, 2023
** Pool Day 12
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(cat, same_shit_as_cat_linuw)
{
    int ret = cat(2, (char *[2]){"prout", "./t.txt"});
    cr_assert(ret == 0);
}

