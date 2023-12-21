/*
** EPITECH PROJECT, 2023
** Pool Day 09
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_show_param_array, show_what_something_contain, .init = cr_redirect_stdout)
{
    char *arr[] = {"Hello", "World", "Pe-nis"};
    INFO_T *par = my_params_to_array(3, arr);
    my_show_param_array(par);

    cr_assert_stdout_eq_str("Hello\n5\nHello\nWorld\n5\nWorld\nPe-nis\n6\nPe\nnis\n");
}

