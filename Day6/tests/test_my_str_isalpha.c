/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_str_isalpha, check_if_contain_just_alphachar)
{
    cr_assert(my_str_isalpha("abc") == 1);
    cr_assert(my_str_isalpha("abc3") == 0);
    cr_assert(my_str_isalpha("") == 1);
}

