/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#include "include/my.h"

static void my_cmp(char **tab, int i1, int i2, int cmp)
{
    char *tmp = NULL;

    if (cmp != 1)
        return;
    tmp = tab[i1];
    tab[i1] = tab[i2];
    tab[i2] = tmp;
}

int my_advanced_sort_word_array(char **tab, SORTING_FUNC)
{
    for (int i = 0; tab[i]; i++) {
        for (int j = 1; tab[j]; j++) {
            my_cmp(tab, j - 1, j, cmp(tab[j - 1], tab[j]));
        }
    }
    return 0;
}
