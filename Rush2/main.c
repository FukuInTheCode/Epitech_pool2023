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
    my_put_nbr(mod_100);
    my_putchar('.');
    if ((int)((x - mod_100) * 100) < 10)
        my_put_nbr(0);
    my_put_nbr((int)((x - mod_100) * 100));
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
        print_freq(100 * rush_frequence(argv[1], count_tmp));
        write(1, "%)\n", 3);
    }
    find_lang(argv[1]);
    return 0;
}
