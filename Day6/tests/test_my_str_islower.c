/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_str_islower, check_if_contain_just_lowercase)
{
    cr_assert(my_str_islower("abc") == 1);
    cr_assert(my_str_islower("abc3") == 0);
    cr_assert(my_str_islower("abC") == 0);
}

