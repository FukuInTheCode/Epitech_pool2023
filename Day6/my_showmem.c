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

static void show_line_adress(unsigned long mem)
{
    char *base_hex = "0123456789abcdef";
    char new_n[32] = {0};
    int i = 0;

    for (; mem != 0; mem /= 16)
        new_n[i++] = base_hex[mem % 16];
    for (int j = i - 1; j >= 0; j--)
        write(1, new_n + j, 1);
    write(1, ": ", 3);
}

int my_showmem(char const *str, int size)
{
    int j;

    for (int i = 0; i < size; i += 16) {
        show_line_adress((unsigned long)(str + i));
        for (j = 0; j < 16 && i + j + 1 < size; j++) {
            write(1, "0", (str[i + j] < 16));
            my_putnbr_base(str[i + j], "0123456789abcdef");
            write(1, " ", (j % 2 && j != 15));
        }
        for (int k = j; k < 17; k++)
            write(1, "  ", 1 + (j % 2));
        write(1, "  ", 2 * (j % 2 == 0 && j != 16));
        for (int j = 0; j < 16 && i + j < size; j++)
            show_char(str[i + j]);
        write(1, "\n", 1);
    }
    return 0;
}
