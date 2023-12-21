/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_putnbr_base, convert_int_to_given_base, .init = cr_redirect_stdout)
{
    my_putnbr_base(5, "01");
    cr_assert_stdout_eq_str("101");
}

Test(my_putnbr_base, convert_int_to_given_base2, .init = cr_redirect_stdout)
{
    my_putnbr_base(0, "01");
    cr_assert_stdout_eq_str("0");
}

Test(my_putnbr_base, convert_int_to_given_base3, .init = cr_redirect_stdout)
{
    my_putnbr_base(-5, "01");
    cr_assert_stdout_eq_str("-101");
}

Test(my_putnbr_base, convert_int_to_given_base4, .init = cr_redirect_stdout)
{
    my_putnbr_base(15, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("F");
}

Test(my_putnbr_base, convert_int_to_given_base5, .init = cr_redirect_stdout)
{
    my_putnbr_base(15, "0123456789");
    cr_assert_stdout_eq_str("15");
}
