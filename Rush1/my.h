/*
** EPITECH PROJECT, 2023
** Pool Day Rush
** File description:
** Placeholder
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>

    #define MAX_INTEGER 2147483647
    #define MIN_INTEGER -2147483648
    #define GETNBR_CHECK (is_int_stred(str[i]) || is_sign_stred(str[i]))

static inline void my_print_spe_case(int x, int y, char *str)
{
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++)
            my_putchar(str[0]);
        my_putchar('\n');
    }
}

static inline void print_last(int x , int y, char *str)
{
    if (y != 1) {
        my_putchar(str[4]);
        for (int i = 0; i < x - 2; i++) {
            my_putchar(str[0]);
        }
        if (x != 1)
            my_putchar(str[5]);
        my_putchar('\n');
    }
}

static inline void draw(int x, int y, char *str, char do_print_corner)
{
    if ((x == 1 || y == 1) && do_print_corner == 0)
        return my_print_spe_case(x, y, str);
    my_putchar(str[2]);
    for (int i = 0; i < x - 2; i++) {
        my_putchar(str[0]);
    }
    if (x != 1)
        my_putchar(str[3]);
    my_putchar('\n');
    for (int i = 0; i < y - 2; i++) {
        my_putchar(str[1]);
        for (int j = 0; j < x - 2; j++) {
            my_putchar(' ');
        }
        if (x != 1)
            my_putchar(str[1]);
        my_putchar('\n');
    }
    print_last(x, y, str);
}

void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_swap(int *a, int *b);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
void draw(int x, int y, char *str, char do_print_corner);
#endif
