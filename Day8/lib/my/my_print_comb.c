/*
** EPITECH PROJECT, 2023
** Pool Day 03
** File description:
** Placeholder
*/

#include "../../include/my.h"

void my_print_second(char n, char n2)
{
    for (char i = n + 1; i <= '9'; i++) {
        my_putchar(n2);
        my_putchar(n);
        my_putchar(i);
        if (n2 == '7' && n == '8' && i == '9')
            continue;
        my_putchar(',');
        my_putchar(' ');
    }
}

void my_print_first(char n)
{
    for (char i = n + 1; i <= '8'; i++)
        my_print_second(i, n);
}

int my_print_comb(void)
{
    for (char i = '0'; i <= '7'; i++)
        my_print_first(i);
    return 0;
}
