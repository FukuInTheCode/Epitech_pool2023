/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_strdup, cpy_str_in_malloc_str)
{
    char *dest = my_strdup("HelloWorld!");
    cr_assert_str_eq(dest, "HelloWorld!");
    free(dest);
}
