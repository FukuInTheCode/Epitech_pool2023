/*
** EPITECH PROJECT, 2023
** Pool Day 09
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_params_to_array, put_str_arr_struct_arr)
{
    char *arr[] = {"Hello", "World", "Pe\nis"};
    INFO_T *arr_ret = my_params_to_array(3, arr);
    for (int i = 0; arr_ret[i].str; i++) {
        cr_assert(arr_ret[i].length == my_strlen(arr[i]));
        cr_assert_str_eq(arr_ret[i].str, arr[i]);
        cr_assert_str_eq(arr_ret[i].copy, arr[i]);
        free(arr_ret[i].copy);
        free(arr_ret[i].word_array);
    }
    free(arr_ret);
}
