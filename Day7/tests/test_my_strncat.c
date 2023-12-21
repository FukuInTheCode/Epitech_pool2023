/*
** EPITECH PROJECT, 2023
** Pool Day 07
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_strncat, concat_two_str_nth_first_char)
{
    char dest[99] = {0};
    my_strcpy(dest, "Hello");
    my_strcat(dest, "World", 3);
    cr_assert_str_eq(dest, "HelloWor");
    my_strcpy(dest, "Hello");
    my_strcat(dest, "World", -1);
    cr_assert_str_eq(dest, "HelloWorld");
    my_strcpy(dest, "Hello");
    my_strcat(dest, "World", 100);
    cr_assert_str_eq(dest, "HelloWorld");
}
