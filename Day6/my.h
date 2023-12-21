/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <criterion/criterion.h>

    #define MAX_INTEGER 2147483647
    #define MIN_INTEGER -2147483648
    #define GETNBR_CHECK (is_int_stred(str[i]) || is_sign_stred(str[i]))
void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_swap(int *a, int *b);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
char *my_revstr(char *);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *mt_strstr(char *, char const *);
#endif
