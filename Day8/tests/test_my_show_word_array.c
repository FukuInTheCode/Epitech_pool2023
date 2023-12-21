/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/


#include "../include/my.h"

Test(my_show_word_array, show_array, .init = cr_redirect_stdout)
{
    char *arr[] = {"Hello", "World", "!", 0};
    my_show_word_array(arr);
    cr_assert_stdout_eq_str("Hello\nWorld\n!\n");
}
