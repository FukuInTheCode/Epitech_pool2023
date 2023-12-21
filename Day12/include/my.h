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
    #include "mylist.h"

    #define MAX_INTEGER 2147483647
    #define MIN_INTEGER -2147483648
    #define GETNBR_CHECK (is_int_stred(str[i]) || is_sign_stred(str[i]))
    #define SORTING_FUNC  int(*cmp)(char const *, char const *)

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
linked_list_t *my_params_to_list(int, char const **);
int my_list_size(linked_list_t const *);
void my_rev_list(linked_list_t **);
int my_apply_on_nodes(linked_list_t *, int(*f)(void *));
int my_apply_on_matching_nodes(linked_list_t *, int(*f)(),
    void const *data_ref, int(*cmp)());
linked_list_t *my_find_node(linked_list_t const *, void const *,
    int(*cmp)());
int my_delete_nodes(linked_list_t **, void const *, int(*cmp)());
void my_concat_list(linked_list_t **begin1, linked_list_t *begin2);
void my_sort_list(linked_list_t **, int(*cmp)());
void my_add_in_sorted_list(linked_list_t **, void *, int(*cmp)());
void my_merge(linked_list_t **, linked_list_t *, int(*cmp)());
#endif
