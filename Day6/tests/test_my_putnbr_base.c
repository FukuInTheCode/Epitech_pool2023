/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

static char is_empty(FILE* file)
{
    return fgetc(file) == EOF;
}

Test(my_putnbr_base, decimal, .init = cr_redirect_stdout)
{
    char *base = "0123456789";

    my_putnbr_base(0, base);
    my_putnbr_base(-5, base);
    my_putnbr_base(9, base);
    my_putnbr_base(42, base);
    my_putnbr_base(-84, base);
    my_putnbr_base(-2147483648, base);
    my_putnbr_base(2147483647, base);
    cr_assert_stdout_eq_str("0" "-5" "9" "42" "-84" "-2147483648" "2147483647");
//    cr_assert_stdout_eq_str("0");
}

Test(my_putnbr_base, hex, .init = cr_redirect_stdout)
{
    char *base = "0123456789abcdef";

    my_putnbr_base(0, base);
    my_putnbr_base(-5, base);
    my_putnbr_base(9, base);
    my_putnbr_base(42, base);
    my_putnbr_base(-84, base);
    my_putnbr_base(-2147483648, base);
    my_putnbr_base(2147483647, base);
    cr_assert_stdout_eq_str("0" "-5" "9" "2a" "-54" "-80000000" "7fffffff");
}

Test(my_putnbr_base, binary, .init = cr_redirect_stdout)
{
    char *base = "01";

    my_putnbr_base(0, base);
    my_putnbr_base(-5, base);
    my_putnbr_base(9, base);
    my_putnbr_base(42, base);
    my_putnbr_base(-84, base);
    my_putnbr_base(-2147483648, base);
    my_putnbr_base(2147483647, base);
    cr_assert_stdout_eq_str("0" "-101" "1001" "101010" "-1010100" \
                            "-10000000000000000000000000000000" \
                            "1111111111111111111111111111111");
}

Test(my_putnbr_base, invalid_base, .init = cr_redirect_stdout)
{
    char *base = "";

    my_putnbr_base(0, base);
    my_putnbr_base(-5, base);
    my_putnbr_base(9, base);
    my_putnbr_base(42, base);
    my_putnbr_base(-84, base);
    my_putnbr_base(-2147483648, base);
    my_putnbr_base(2147483647, base);
    base = "0";
    my_putnbr_base(0, base);
    my_putnbr_base(-5, base);
    my_putnbr_base(9, base);
    my_putnbr_base(42, base);
    my_putnbr_base(-84, base);
    my_putnbr_base(-2147483648, base);
    my_putnbr_base(2147483647, base);
    cr_assert(is_empty(cr_get_redirected_stdout()));
}

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
    my_putnbr_base(-8, "01");
    cr_assert_stdout_eq_str("-1000");
}

Test(my_putnbr_base, convert_int_to_given_base4, .init = cr_redirect_stdout)
{
    my_putnbr_base(16, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("10");
}

Test(my_putnbr_base, convert_int_to_given_base5, .init = cr_redirect_stdout)
{
    my_putnbr_base(15, "0123456789");
    cr_assert_stdout_eq_str("15");
}

Test(my_putnbr_base, convert_int_to_given_base11, .init = cr_redirect_stdout)
{
    cr_assert(my_putnbr_base(42, "") == 0);
    cr_assert_stdout_eq_str("");
}
