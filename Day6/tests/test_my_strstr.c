/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../my.h"

Test(my_strstr, find_first_occurence_of_str_in_str)
{
    char str[] = "HelloWorld";

    cr_assert_str_eq(my_strstr(str, "orld"), str + 6);
    cr_assert_str_eq(my_strstr(str, "lo"), str + 3);
    cr_assert_str_eq(my_strstr(str, ""), strstr(str, ""));
}
