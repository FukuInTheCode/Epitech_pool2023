/*
** EPITECH PROJECT, 2023
** Pool Day 07
** File description:
** Placeholder
*/

#include "../include/my.h"

static void swap_index(char *argv[], int i)
{
    char *tmp;

    if (my_strcmp(argv[i - 1], argv[i]) < 1)
        return;
    tmp = argv[i];
    argv[i] = argv[i - 1];
    argv[i - 1] = tmp;

}

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++) {
        for (int j = 1; j < argc; j++)
            swap_index(argv, j);
    }
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        write(1, "\n", 1);
    }
    return 0;
}

