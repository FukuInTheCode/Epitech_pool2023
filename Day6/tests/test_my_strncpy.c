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

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strcpy, copy_whole_str)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 6);
    cr_assert_str_eq(dest, "Hello");
}
