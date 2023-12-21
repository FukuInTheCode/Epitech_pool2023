/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strncmp, compare_the_nth_first_char)
{
    cr_assert_eq(my_strncmp("ABC", "ABC", 2), 0);
}

Test(my_strncmp, compare_the_nth_first_char2)
{
    cr_assert_eq(my_strncmp("A2C", "A1C", 2), 1);
}

Test(my_strncmp, compare_the_nth_first_char3)
{
    cr_assert_eq(my_strncmp("A0C", "A1C", 2), -1);
}
