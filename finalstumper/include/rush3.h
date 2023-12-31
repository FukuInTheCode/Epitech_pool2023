/*
** EPITECH PROJECT, 2023
** rush3.h
** File description:
** Placeholder
*/

#ifndef RUSH3_H
    #define RUSH3_H
    #include <unistd.h>
    #include <stdio.h>
    #include <stdint.h>
    #include <limits.h>
    #include <errno.h>
    #include <criterion/criterion.h>
    #include <criterion/redirect.h>

    #define MAX_INTEGER 2147483647
    #define MIN_INTEGER -2147483648
    #define GETNBR_CHECK (is_int_stred(str[i]) || is_sign_stred(str[i]))
    #define SORTING_FUNC  int(*cmp)(char const *, char const *)
    #define BUFF_SIZE 320000

void my_putchar(char);
int my_isneg(int);
char *my_put_nbr(int);
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_putnbr_base(int, char const *);
int my_getnbr_base(char const *, char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_factorial_rec(int);
int my_compute_factorial_it(int);
int my_compute_power_it(int, int);
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
int get_color(unsigned char, unsigned char, unsigned char);
int swap_endian_color(int color);
int count_valid_queens_placements(int);
int my_find_prime_sup(int);
char *my_strstr(char *str, char const *);
int my_sort_word_array(char **);
int my_advanced_sort_word_array(char **, SORTING_FUNC);
int add_buffer(char **, char *, int);
int rush1_1(char **, char *, int[2]);
int rush1_2(char **, char *, int[2]);
int rush1_3(char **, char *, int[2]);
int rush1_4(char **, char *, int[2]);
int rush1_5(char **, char *, int[2]);
int rush1_345_line(char **, char *, int[2]);
int rush1_2_line(char **, char *, int[2]);
int rush1_345(char **, char *, int[2]);
int rush1_45(char **, char *, int[2]);
int rush3(char *);

typedef int(*rush_func)();

typedef struct {
    char *s;
    rush_func f;
} my_struct_t;

static my_struct_t const corner_0[] = {
    {"o", rush1_1},
    {"/", rush1_2},
    {"*", rush1_2_line},
    {"A", rush1_345},
    {"B", rush1_345_line},
    {NULL, NULL}
};

static my_struct_t const corner_1[] = {
    {"A", rush1_3},
    {"C", rush1_45},
    {NULL, NULL}
};

static my_struct_t const corner_2[] = {
    {"A", rush1_4},
    {"C", rush1_5},
    {NULL, NULL}
};

#endif
