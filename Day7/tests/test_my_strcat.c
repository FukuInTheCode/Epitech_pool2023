/*
** EPITECH PROJECT, 2023
** Pool Day 07
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_strcat, concat_two_str)
{
    char dest[99] = {0};
    my_strcpy(dest, "Hello");
    my_strcat(dest, "World");
    cr_assert_str_eq(dest, "HelloWorld");
}
