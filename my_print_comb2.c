/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "my.h"

static void is_end(char i, char j, char k, char l)
{
    if (i == '9' && j == '8' && k == '9' && l == '9')
        return;
    my_putchar(',');
    my_putchar(' ');
}

static void my_print_second(char i, char j)
{
    if (i == '9' && j == '9')
        return;
    for (char k = i; k <= '9'; k++) {
        for (char l = (k == i) * (j - '0' + 1) + '0';\
                                        l <= '9'; l++) {
            my_putchar(i);
            my_putchar(j);
            my_putchar(' ');
            my_putchar(k);
            my_putchar(l);
            is_end(i, j, k, l);
        }
    }
}

int my_print_comb2(void)
{
    for (char i = '0'; i <= '9'; i++) {
        for (char j = '0'; j <= '9'; j++) {
            my_print_second(i, j);
        }
    }
    return 0;
}
