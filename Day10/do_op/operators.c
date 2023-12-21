/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#include "../include/my.h"

int my_add(int a, int b)
{
    my_put_nbr(a + b);
    return 0;
}

int my_sub(int a, int b)
{
    my_put_nbr(a - b);
    return 0;
}

int my_mul(int a, int b)
{
    my_put_nbr(a * b);
    return 0;
}

int my_mod(int a, int b)
{
    char *err_msg = "Stop: modulo by zero";

    if (b == 0) {
        write(2, err_msg, my_strlen(err_msg));
        return 84;
    }
    my_put_nbr(a % b);
    return 0;
}

int my_div(int a, int b)
{
    char *err_msg = "Stop: division by zero";

    if (b == 0) {
        write(2, err_msg, my_strlen(err_msg));
        return 84;
    }
    my_put_nbr(a / b);
    return 0;
}

