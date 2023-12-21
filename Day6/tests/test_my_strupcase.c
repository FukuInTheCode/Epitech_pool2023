/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strupcase, change_char_to_upper_case)
{
    char str[6] = "Hel-lo";
    cr_assert_str_eq(my_strupcase(str), "HEL-LO");
}

Test(my_strupcase, empty_string)
{
    char str[1] = "";
    cr_assert_str_empty(my_strupcase(str));
}

Test(my_strupcase, all_upper_case)
{
    char str[6] = "HELLO";
    cr_assert_str_eq(my_strupcase(str), "HELLO");
}

Test(my_strupcase, all_lower_case)
{
    char str[6] = "hello";
    cr_assert_str_eq(my_strupcase(str), "HELLO");
}

Test(my_strupcase, mixed_case)
{
    char str[10] = "HeLlO123";
    cr_assert_str_eq(my_strupcase(str), "HELLO123");
}

Test(my_strupcase, special_characters)
{
    char str[12] = "!@#HeLlO12";
    cr_assert_str_eq(my_strupcase(str), "!@#HELLO12");
}
