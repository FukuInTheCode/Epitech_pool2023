/*
** EPITECH PROJECT, 2023
** Pool Day 07
** File description:
** Placeholder
*/

#include "../include/my.h"

int main(int argc, char *argv[])
{
    for (int i = argc - 1; i >= 0; i--) {
        for (int j = 0; argv[i][j]; j++)
            write(1, argv[i] + j, 1);
        write(1, "\n", 1);
    }
    return 0;
}
