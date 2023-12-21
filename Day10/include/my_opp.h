/*
** EPITECH PROJECT, 2023
** Pool Day 10
** File description:
** Placeholder
*/

#ifndef MY_OPP_H
    #define MY_OPP_H
    #include <unistd.h>

typedef int (*op_func)(int, int);

typedef struct operator {
    char *op;
    op_func f;
} operator_t;

int my_add(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_div(int, int);
int my_mod(int, int);
int my_usage(int, int);

const struct operator OPERATORS_FUNCS[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {"", &my_usage}
};

#endif
