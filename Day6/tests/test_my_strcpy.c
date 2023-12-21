/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strcpy, copy_string_in_empty_array)
{
    char dest[7] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strcpy, copy_string_in_empty_array_return_value)
{
    char dest[7] = {0};
    char *cpy = my_strcpy(dest, "Hello");

    cr_assert_str_eq(cpy, "Hello");
}
