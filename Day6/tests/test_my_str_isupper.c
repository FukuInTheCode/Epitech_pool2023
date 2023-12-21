/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_str_isupper, check_if_contain_just_uppercase)
{
    cr_assert(my_str_isupper("ABC") == 1);
    cr_assert(my_str_isupper("ABC3") == 0);
    cr_assert(my_str_isupper("AAcc") == 0);
    cr_assert(my_str_isupper("") == 1);
}

