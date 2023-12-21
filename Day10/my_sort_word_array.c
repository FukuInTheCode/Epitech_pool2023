/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#include "include/my.h"

static void my_test_str(char **tab, int i1, int i2)
{
    char *tmp = NULL;

    if (my_strcmp(tab[i1], tab[i2]) != 1)
        return;
    tmp = tab[i1];
    tab[i1] = tab[i2];
    tab[i2] = tmp;
}

int my_sort_word_array(char **tab)
{
    for (int i = 0; tab[i]; i++) {
        for (int j = 1; tab[j]; j++)
            my_test_str(tab, j - 1, j);
    }
    return 0;
}
