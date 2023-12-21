/*
** EPITECH PROJECT, 2023
** Pool Day 09
** File description:
** Placeholder
*/


#include "../include/my.h"

Test(get_color, rgb_to_int)
{
    cr_assert(get_color(0, 0, 0) == 0);
    cr_assert(get_color(0, 0, 1) == 1);
}
