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
    free(output[3]);
    free(output);
}

Test(my_str_to_word_array, with_nchar_that_are_next)
{
    char *input = "./my_params_to_array";
    char **output = my_str_to_word_array(input);
    char *expected[] = {"my", "params", "to", "array"};

    for (int i = 0; output[i]; i++)
        cr_assert_str_eq(output[i], expected[i]);
    for (int i = 0; output[i]; i++) {
        free(output[i]);
    }
    free(output[4]);
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
    free(output[0]);
    free(output);
}

static char str_array_eq(char **arr1, char **arr2)
{
    unsigned int i = 0;

    for (; arr1[i] && arr2[i]; i++) {
        if (strcmp(arr1[i], arr2[i]) != 0)
            return 0;
    }
    if (arr1[i] != arr2[i])
        return 0;
    return 1;
}

static void free_arr(char **arr)
{
    for (unsigned int i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);
}

Test(my_str_to_word_array, works)
{
    char **words = my_str_to_word_array("-[t 0Hello~<how are++--you?");
    char *expected[] = { "t", "0Hello", "how", "are", "you", 0 };

    cr_assert(str_array_eq(words, expected));
    free_arr(words);
}

Test(my_str_to_word_array, empty)
{
    char **words = my_str_to_word_array("-?+-,");
    char *expected[] = { 0 };

    cr_assert(str_array_eq(words, expected));
    free_arr(words);
}
