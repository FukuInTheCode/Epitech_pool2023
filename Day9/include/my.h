/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** Placeholder
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <criterion/criterion.h>
    #include <criterion/redirect.h>
    #include <stdio.h>
    #include <stdint.h>
    #include "my_macro_abs.h"

    #define MAX_INTEGER 2147483647
    #define MIN_INTEGER -2147483648
    #define GETNBR_CHECK (is_int_stred(str[i]) || is_sign_stred(str[i]))
    #define ENVIE_DE_MOURIR
    #define INFO_T struct info_param

void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_putnbr_base(int, char const *);
int my_getnbr_base(char const *, char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_is_prime(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strtr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strdup(char const *);
int is_end_combn(int, int);
char *concat_params(int, char **);
int my_show_word_array(char const **);
char **my_str_to_word_array(char const *str);
char *convert_base(char const *, char const *, char const *);
struct info_param *my_params_to_array(int, char **);
int my_show_param_array(INFO_T *const);
int get_color(unsigned char, unsigned char, unsigned char);
int swap_endian_color(int color);
#endif

#ifdef ENVIE_DE_MOURIR
struct info_param {
    int length;
    char *str;
    char *copy;
    char **word_array;
};
#endif
