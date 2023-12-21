/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#include "include/my.h"

static op_func find_op(char *op_str)
{
    for (int i = 0; op_str[i]; i++) {
        if (op[i] == '+')
            return my_add;
        if (op[i] == '/')
            return my_div;
        if (op[i] == '%')
            return my_mod;
        if (op[i] == '-')
            return my_sub;
        if (op[i] == '*')
            return my_mul;
    }
    return NULL;
}

static int do_op(char *av[])
{
    int n1 = my_getnbr(av[1]);
    int n2 = my_getnbr(av[3]);
    op_func op = find_op(av[2]);

    if (op == NULL)
        return 0;
    return op(n1, n2);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return 84;
    return do_op(argv);
}
