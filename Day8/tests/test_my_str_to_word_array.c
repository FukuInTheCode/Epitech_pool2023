/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_str_to_word_array, convert_str_arr_word)
{
    char *input = "Hello\nWorld\nYouGood\nPROUT";
    char **output = my_str_to_word_array(input);
    char *expected[] = {"Hello", "World", "YouGood", "PROUT"};

    for (int i = 0; output[i]; i++)
        cr_assert_str_eq(output[i], expected[i]);
    for (int i = 0; output[i]; i++) {
        my_put_nbr(i);
        free(output[i]);
    }
    free(output);
}

