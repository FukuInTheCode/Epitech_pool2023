/*
** EPITECH PROJECT, 2023
** B-CPE-100-LIL-1-1-rush1-ronan.lefeuvre
** File description:
** square1.c
*/

#include "my.h"

void print_last(int x , int y, char *str)
{
    if (y != 1) {
        my_putchar(str[2]);
        for (int i = 0; i < x - 2; i++) {
            my_putchar(str[0]);
        }
        my_putchar(str[2]);
        my_putchar('\n');
    }
}

void draw(int x, int y, char *str)
{
    my_putchar(str[2]);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(str[0]);
    }
    my_putchar(str[2]);
    my_putchar('\n');
    for (int i = 0; i < y - 2; i++) {
        my_putchar(str[1]);
        for (int j = 0; i < x - 2; i++) {
            my_putchar(' ');
        }
        my_putchar(str[1]);
    }
    my_putchar('\n');
    print_last(x, y, str);
}
