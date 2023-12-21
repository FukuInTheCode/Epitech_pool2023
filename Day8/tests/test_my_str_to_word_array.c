/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(my_str_to_word_array, convert_str_arr_word)
{
    char *input = "vive marvin lol";
    char **output = my_str_to_word_array(input);
    char *expected[] = {"vive", "marvin", "lol", 0};

    for (int i = 0; output[i]; i++)
        cr_assert_str_eq(output[i], expected[i]);
    for (int i = 0; output[i]; i++) {
        free(output[i]);
    }
    free(output);
}

Test(my_str_to_word_array, with_nchar_that_are_next)
{
    char *input = "\n\nFor\n\n\n\nThe\n\nAlliance\n";
    char **output = my_str_to_word_array(input);
    char *expected[] = {"For", "The", "Alliance"};

    for (int i = 0; output[i]; i++)
        cr_assert_str_eq(output[i], expected[i]);
    for (int i = 0; output[i]; i++) {
        free(output[i]);
    }
    free(output);
}

Test(my_str_to_word_array, with2_nchar_that_are_next)
{
    char *input = "       ";
    char **output = my_str_to_word_array(input);
    char *expected[1] = {0};
    for (int i = 0; output[i]; i++) {
        cr_assert(output[i] == expected[i]);
        free(output[i]);
    }
    free(output);
}

Test(my_str_to_word_array, with3_nchar_that_are_next)
{
    char *input = "";
    char **output = my_str_to_word_array(input);
    char *expected[1] = {0};
    cr_assert(output[0] == expected[0]);
    free(output);
}

