/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../my.h"

Test(my_strcmp, compare_two_whole_str)
{
    cr_assert(my_strcmp("AB3", "AB1") == strcmp("AB3", "AB1"));
    cr_assert(my_strcmp("AB2", "ABC3") == strcmp("AB2", "ABC3"));
    cr_assert(my_strcmp("ABC", "ABC") == strcmp("ABC", "ABC"));
    cr_assert(my_strcmp("AB", "ABC") == strcmp("AB", "ABC"));
    cr_assert(my_strcmp("ABCD", "ABC") == strcmp("ABCD", "ABC"));
}
