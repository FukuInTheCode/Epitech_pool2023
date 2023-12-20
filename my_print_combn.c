/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

static int gen_first(int n)
{
    int ret = 0;

    for (int i = 1; i < n; i++)
        ret = (ret + i) * 10;
    return ret / 10;
}

static int gen_end(int n)
{
    int ret = 1;

    for (int i = 1; i <= n; i++)
        ret *= 10;
    return ret;
}

static char is_right(int n, int i)
{
    char digit = i % 10;

    i /= 10;
    for (int j = 1; j < n && i != 0; j++) {
        if (digit <= i % 10)
            return 0;
        digit = i % 10;
        i /= 10;
    }
    return 1;
}

int my_print_combn(int n)
{
    int end_border;

    end_border = gen_end(n);
    if (n <= 0 || n >= 11)
        return 0;
    for (int i = gen_first(n); i < end_border; i++) {
        if (is_right(n, i) == 0)
            continue;
        if (i < end_border / 10)
            my_putchar('0');
        my_put_nbr(i);
        if (is_end_combn(n) == 1)
            break;
        my_putchar(',');
        my_putchar(' ');
    }
    return 0;
}
