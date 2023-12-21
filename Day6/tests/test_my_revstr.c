/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

Test(my_revstr, return_value_is_reversed)
{
    char str[6] = {0};

    my_strcpy(str, "Hello");
    cr_assert_str_eq(my_revstr(str), "olleH");
}
