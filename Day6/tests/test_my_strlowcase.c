/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strlowcase, to_lower_case)
{
    char str[] = "Hel-lo";

    cr_assert_str_eq(my_strlowcase(str), "hel-lo");
}
