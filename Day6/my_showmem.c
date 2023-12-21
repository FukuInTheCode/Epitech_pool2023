/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "my.h"

static int show_char(char c)
{
    char tmp = c;

    if (c < 32)
        return write(1, ".", 1);
    return write(1, &tmp, 1);
}

static void show_line_adress(int n)
{
    char adress[8] = {0};

    for (int i = 7; i >= 0; n /= 10)
        adress[i--] = '0' + n % 10;
    write(1, adress, 8);
    write(1, ": ", 2);
}

int my_showmem(char const *str, int size)
{
    int j;
    int i2 = 0;

    for (int i = 0; i < size; i += 16) {
        show_line_adress(i2);
        for (j = 0; j < 16 && i + j + 1 < size; j++) {
            write(1, "0", (str[i + j] < 16));
            my_putnbr_base(str[i + j], "0123456789abcdef");
            write(1, " ", (j % 2));
        }
        for (int k = (j + 1) * 2 + (j + (j % 2 == 0)) * 2 / 5; k < 41; k++)
            write(1, " ", 1);
        for (int j = 0; j < 16 && i + j < size; j++)
            show_char(str[i + j]);
        write(1, "\n", 1);
        i2 += 10;
    }
    return 0;
}
