/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../my.h"

Test(my_strcmp, compare_two_whole_str)
{
    cr_assert_eq(my_strcmp("1", "2"), -1);
}

Test(my_strcmp, compare_two_whole_str2)
{
    cr_assert_eq(my_strcmp("2", "1"), 1);
}

Test(my_strcmp, compare_two_whole_str3)
{
    cr_assert_eq(my_strcmp("1", "1"), 0);
}
