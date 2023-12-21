/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "../../include/my.h"

int is_end_combn(int nb, int i)
{
    if (i == 9 && nb == 1)
        return 1;
    if (i == 89 && nb == 2)
        return 1;
    if (i == 789 && nb == 3)
        return 1;
    if (i == 6789 && nb == 4)
        return 1;
    if (i == 56789 && nb == 5)
        return 1;
    if (i == 456789 && nb == 6)
        return 1;
    if (i == 3456789 && nb == 7)
        return 1;
    if (i == 23456789 && nb == 8)
        return 1;
    if (i == 123456789 && nb == 9)
        return 1;
    return 0;
}
