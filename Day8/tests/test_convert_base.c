/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(convert_base, convert_n_basen_basem)
{
    cr_assert_str_eq(convert_base("100", "01", "0123456789"), "4");
    cr_assert_str_eq(convert_base("1100100", "01", "0123456789"), "100");
    cr_assert_str_eq(convert_base("0", "01", "0123456789"), "0");
    cr_assert_str_eq(convert_base("12345", "0123456789", "0123456789"), "12345");
}
