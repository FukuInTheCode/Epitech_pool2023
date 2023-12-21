/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/


#include "../include/my.h"

Test(concat_params, concat_strs_arr)
{
    char *argv[] = {"Hello", "World", "!"};
    char *dest = concat_params(3, argv);
    cr_assert_str_eq(dest, "Hello\nWorld\n!");
}
