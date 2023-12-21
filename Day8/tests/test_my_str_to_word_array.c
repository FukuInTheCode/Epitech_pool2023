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
        free(output[i]);
    }
    free(output);
}

Test(my_str_to_word_array, with_nchar_that_are_next)
{
    char *input = "For\n\n\n\nThe\n\nAlliance\n";
    char **output = my_str_to_word_array(input);
    char *expected[] = {"For", "The", "Alliance"};

    for (int i = 0; output[i]; i++)
        cr_assert_str_eq(output[i], expected[i]);
    for (int i = 0; output[i]; i++) {
        my_putstr(output[i]);
        free(output[i]);
    }
    free(output);
}

