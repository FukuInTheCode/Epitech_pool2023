/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#include "../include/my.h"

static op_func find_op(char *op_str)
{
    my_putchar(op_str[0]);
    if (op_str[0] == '+')
        return my_add;
    if (op_str[0] == '/')
        return my_div;
    if (op_str[0] == '%')
        return my_mod;
    if (op_str[0] == '-')
        return my_sub;
    if (op_str[0] == '*')
        return my_mul;
    return NULL;
}

static int do_op(char *av[])
{
    int n1 = my_getnbr(av[1]);
    int n2 = my_getnbr(av[3]);
    op_func op = find_op(av[2]);

    if (op == NULL) {
        my_put_nbr(0);
        return 84;
    }
    return op(n1, n2);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return 84;
    return do_op(argv);
}
