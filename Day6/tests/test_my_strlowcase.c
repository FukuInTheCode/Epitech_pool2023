/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strlowcase, to_lower_case)
{
    char str[] = "Hel-lo";
    cr_assert_str_eq(my_strlowcase(str), "hel-lo");
}

Test(my_strlowcase, empty_string)
{
    char str[] = "";
    cr_assert_str_empty(my_strlowcase(str));
}

Test(my_strlowcase, all_upper_case)
{
    char str[] = "HELLO";
    cr_assert_str_eq(my_strlowcase(str), "hello");
}

Test(my_strlowcase, all_lower_case)
{
    char str[] = "hello";
    cr_assert_str_eq(my_strlowcase(str), "hello");
}

Test(my_strlowcase, mixed_case)
{
    char str[] = "HeLlO123";
    cr_assert_str_eq(my_strlowcase(str), "hello123");
}

Test(my_strlowcase, special_characters)
{
    char str[] = "!@#HeLlO12";
    cr_assert_str_eq(my_strlowcase(str), "!@#hello12");
}
