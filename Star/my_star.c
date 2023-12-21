/*
** EPITECH PROJECT, 2023
** Pool Day Star
** File description:
** Placeholder
*/


#include "my.h"

static int get_outer_spaces(unsigned int n, int i)
{
    if (i >= n)
        return i - n;
    return 2 * n + 1 + n - 2 - i;
}

static int get_inner_spaces(unsigned int n, int i)
{
    if (n == i)
        return 2 * i - 3 + 2 * (n == 1);
    if (i > n)
        return 6 * n - 3 - 2 * (i - n) + 2 * (n == 1);
    return 2 * i - 1;
}

static void do_loop(unsigned int size, int from, int to, char incr)
{
    for (int i = from; i * incr < to * incr; i += incr) {
        for (int j = 0; j < get_outer_spaces(size, i); j++)
            my_putchar(' ');
        for (int j = 0; j < 1 + (i == size) * size * 2; j++)
            my_putchar('*');
        for (int j = 0; j < get_inner_spaces(size, i); j++)
            my_putchar(' ');
        for (int j = 0; j < 1 + (i == size) * size * 2; j++)
            my_putchar('*');
        my_putchar('\n');
    }
}

void star(unsigned int size)
{
    for (int i = 0; i < 3 * size - 1 * (size != 1); i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
    do_loop(size, 1, 2 * size, 1);
    do_loop(size, 2 * size, 0, -1);
    for (int i = 0; i < 3 * size - 1 * (size != 1); i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}
