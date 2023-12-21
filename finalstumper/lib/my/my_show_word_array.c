/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../../include/rush3.h"

int my_show_word_array(char const **tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
