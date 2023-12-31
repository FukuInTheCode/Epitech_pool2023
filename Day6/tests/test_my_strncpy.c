/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    cr_assert_str_eq(my_strncpy(dest, "HelloWorld", 5), "Hello");
}

Test(my_strcpy, copy_whole_str)
{
    char dest[6] = {0};

    cr_assert_str_eq(my_strncpy(dest, "Hello", 5), "Hello");
}

Test(my_strcpy, copy_whole_str_but_n_too_big)
{
    char dest[6] = {0};

    cr_assert_str_eq(my_strncpy(dest, "Hello", 17), "Hello");
}
