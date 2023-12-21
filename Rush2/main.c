/*
** EPITECH PROJECT, 2023
** Pool Day Rush2
** File description:
** Placeholder
*/

#include "include/my.h"

static void print_freq(double x)
{
    int mod_100 = (int)x % 100;
    my_putnbr(mod_100);
    my_putchar('.');
    my_putchar((int)((x - mod_100) * 100));
}

int main(int argc, char *argv[])
{
    int count_tmp;

    if (argc < 3)
        return 84;
    for (int i = 2; i != argc ; i++) {
        write(1, argv[i], 1);
        write(1, ":", 1);
        count_tmp = rush_count(argv[1], *(argv[i]));
        my_put_nbr(count_tmp);
        write(1, " (", 2);
        print_feq(rush_frequence(argv[1], count_tmp));
        write(1, "%)\n", 3);
    }
    return 0;
}
