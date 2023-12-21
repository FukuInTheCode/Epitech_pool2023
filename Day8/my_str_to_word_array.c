/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "include/my.h"

static int is_alphanum(char c)
{
    if ('0' <= c && c <= '9')
        return 1;
    return ('a' <= c && c <= 'z') + ('A' <= c && c <= 'Z');
}

static void init_tmp(size_t count, char ***ret, char **tmp, char const *str)
{
    *ret = malloc(sizeof(char *) * (count + 1));
    *tmp = malloc(my_strlen(str) + 1);
    my_strcpy(*tmp, str);
    for (int i = 0; (*tmp)[i]; i++)
        (*tmp)[i] -= (*tmp)[i] * (is_alphanum((*tmp)[i]) == 0);
}

static int count_first_non_alpha(char const *str)
{
    int i = 0;

    for (; str[i] && !is_alphanum(str[i]); i++)
        continue;
    return i;
}

static size_t fill_arr(char const *str, char *tmp, char **ret, size_t sub_i)
{
    for (int i = count_first_non_alpha(str); i < my_strlen(str); i++) {
        if (tmp[i] != '\0' || (tmp[i] == 0 && tmp[i + 1] == 0))
            continue;
        ret[sub_i] = malloc(my_strlen(tmp + i + 1) + 1);
        my_strcpy(ret[sub_i++], tmp + i + 1);
    }
    return sub_i;
}

char **my_str_to_word_array(char const *str)
{
    char **ret = NULL;
    size_t count = 1;
    char *tmp = NULL;
    size_t sub_i = 0;

    for (int i = 0; str[i]; i++) {
        if (is_alphanum(str[i - 1]) == 0 && i != 0)
            continue;
        count += is_alphanum(str[i]) == 0;
    }
    init_tmp(count, &ret, &tmp, str);
    ret[sub_i] = malloc(my_strlen(tmp) + 1);
    my_strcpy(ret[sub_i++], tmp + count_first_non_alpha(str));
    sub_i = fill_arr(str, tmp, ret, sub_i);
    ret[sub_i] = NULL;
    free(tmp);
    return ret;
}
