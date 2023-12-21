/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#include "../include/my.h"

const struct operator OPERATORS_FUNCS[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {"", &my_usage}
};

int my_usage(int a, int b)
{
    int useless = (a - a == 0 && b - b == 0);

    write(2, "error: only [ ", my_strlen("error: only [ "));
    for (int i = 0; OPERATORS_FUNCS[i].op; i++) {
        write(2, OPERATORS_FUNCS[i].op, my_strlen(OPERATORS_FUNCS[i].op));
        write(2, " ", 1);
    }
    write(2, "] are supported", my_strlen("] are supported") * useless);
    return 84;
}

static op_func find_op(char *op_str)
{
    int i = 0;
    int len = 0;

    for (; OPERATORS_FUNCS[i].op; i++) {
        len = my_strlen(OPERATORS_FUNCS[i].op);
        if (my_strncmp(op_str, OPERATORS_FUNCS[i].op, len) != 0)
            continue;
        return OPERATORS_FUNCS[i].f;
    }
    return OPERATORS_FUNCS[i].f;
}

static int do_op(char *av[])
{
    int n1 = my_getnbr(av[1]);
    int n2 = my_getnbr(av[3]);

    return find_op(av[2])(n1, n2);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return 84;
    return do_op(argv);
}
