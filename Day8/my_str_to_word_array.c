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

char **my_str_to_word_array(char const *str)
{
    char **ret;
    size_t count = 1;
    char *tmp;
    size_t sub_i = 0;

    for (int i = 0; str[i]; i++)
        count += is_alphanum(str[i]) == 0;
    ret = malloc(sizeof(char *) * (count + 1));
    tmp = malloc(my_strlen(str) + 1);
    my_strcpy(tmp, str);
    ret[sub_i++] = tmp;
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_alphanum(tmp[i]))
            continue;
        tmp[i] = '\0';
        ret[sub_i++] = tmp + i + 1;
    }
    ret[sub_i] = NULL;
    return ret;
}
