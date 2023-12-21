/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#include "my.h"

static char is_valid(long *queens, int qount, int n, long qurrent)
{
    int x = qurrent % n;
    int y = qurrent / n;
    int tmp_x;
    int tmp_y;

    for (int i = 0; i < qount; i++) {
        tmp_x = queens[i] % n;
        tmp_y = queens[i] / n;
        if (tmp_x == x)
            return 0;
        if (tmp_y == y)
            return 0;
        if (tmp_x - x == tmp_y - y)
            return 0;
        if (tmp_x - x == y - tmp_y)
            return 0;
    }
    return 1;
}

static int my_recursif(long *queens, int qount, int n, long *big_o)
{
    int ret = 0;
    long i = queens[qount - (qount != 0)] * (qount != 0);

    for (; i < n * n; i++) {
        (*big_o)++;
        if (is_valid(queens, qount, n, i) == 0)
            continue;
        queens[qount] = i;
        if (qount + 1 == n)
            ret++;
        else
            ret += my_recursif(queens, qount + 1, n, big_o);
    }
    return ret;
}

int count_valid_queens_placements(int n)
{
    long queens[n];
    long big_o = 0;

    int ret = my_recursif(queens, 0, n, &big_o);
    printf("%ld\n", big_o);
    return ret;
}
