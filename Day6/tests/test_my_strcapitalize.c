/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strcapitalize, capitalize_everyword)
{
    char str[] = "how are you?";
    char str1[] = "how are-you?";
    char str2[] = "how43are[you?";
    char str3[] = "heLLO, wOKrl! hOw are YOU?";

    cr_assert_str_eq(my_strcapitalize(str), "How Are You?");
    cr_assert_str_eq(my_strcapitalize(str1), "How Are-You?");
    cr_assert_str_eq(my_strcapitalize(str2), "How43are[You?");
    cr_assert_str_eq(my_strcapitalize(str3), "Hello, Worl! How Are Y?");
}
