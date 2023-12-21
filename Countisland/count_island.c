/*
** EPITECH PROJECT, 2023
** Pool Day 07s
** File description:
** Placeholder
*/

#include "include/my.h"

static char check_is_island(char **world, int i, int j, int count)
{
    if (world[i][j] != 'X')
        return 0;
    world[i][j] = count + '0';
    check_is_island(world, i + 1, j, count);
    check_is_island(world, i, j + 1, count);
    check_is_island(world, i - 1, j, count);
    check_is_island(world, i, j - 1, count);
    return 1;
}

int count_island(char **world)
{
    int count = 0;

    for (int i = 0; world[i][0] != 0; i++) {
        for (int j = 0; world[i][j] != 0; j++)
            count += check_is_island(world, i, j, count);
    }
    return count;
}
