/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../my.h"

Test(my_str_isnum, check_if_contain_other_num)
{
    cr_assert(my_str_isnum("123") == 1);
    cr_assert(my_str_isnum("a123a") == 0);
    cr_assert(my_str_isnum("") == 1);
}
