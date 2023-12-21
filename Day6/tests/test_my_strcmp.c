/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../my.h"

Test(my_strcmp, compare_two_whole_str)
{
    cr_assert(my_strcmp("AB2", "AB1") > 0);
    cr_assert(my_strcmp("AB2", "ABC3") < 0);
    cr_assert(my_strcmp("ABC", "ABC") == 0);
    cr_assert(my_strcmp("AB", "ABC") == 0);
    cr_assert(my_strcmp("ABCD", "ABC") == 0);
}
