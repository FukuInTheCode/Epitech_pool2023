/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strupcase, change_char_to_upper_case)
{
    char str[6] = "Hel-lo";

    cr_assert_str_eq(my_strupcase(str), "HEL-LO");
}
