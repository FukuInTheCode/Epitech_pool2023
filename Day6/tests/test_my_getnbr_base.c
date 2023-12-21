/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_getnbr_base, check)
{
    cr_assert_eq(my_getnbr_base("101", "01"), 5);
    cr_assert_eq(my_getnbr_base("+-101", "01"), -5);
    cr_assert_eq(my_getnbr_base("101a", "01"), 5);
    cr_assert_eq(my_getnbr_base("--101", "01"), 5);
    cr_assert_eq(my_getnbr_base("123", "0123456789"), 123);
    cr_assert_eq(my_getnbr_base("123456789123456", "0123456789"), 0);
    cr_assert_eq(my_getnbr_base("+++---32aa32", "0123456789"), -32);
    cr_assert_eq(my_getnbr_base("+++---a32aa32", "0123456789"), 0);
    cr_assert_eq(my_getnbr_base("10", "01"), 2);
    cr_assert_eq(my_getnbr_base("-ahudao100", "01"), 0);
}
