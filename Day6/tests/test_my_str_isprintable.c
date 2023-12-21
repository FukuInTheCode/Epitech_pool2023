/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_str_isprintable, check_if_isprintable)
{
    cr_assert(my_str_isprintable("abc") == 1);
    cr_assert(my_str_isprintable("a\nb") == 0);
    cr_assert(my_str_isprintable("DQSD qSQ") == 1);
}
