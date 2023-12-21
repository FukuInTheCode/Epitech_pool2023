/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_showstr, print_str_with_unpritable_char, .init = cr_redirect_stdout)
{
    my_showstr("I like \n ponies!");
    cr_assert_stdout_eq_str("I like \\0a ponies!");
}
