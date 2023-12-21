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
    char **ret = NULL;
    size_t count = 0;
    char *tmp = my_strdup(str);
    size_t sub_i = 0;

    for (int i = 0; str[i]; i++) {
        if (is_alphanum(str[i]) != 0 && is_alphanum(str[i + 1]) == 0)
            count++;
    }
    ret = malloc(sizeof(char *) * (count + 1));
    for (int i = 0; str[i]; i++)
        tmp[i] -= tmp[i] * (is_alphanum(tmp[i]) == 0);
    for (int i = 0; str[i]; i++) {
        if (!tmp[i])
            continue;
        ret[sub_i++] = my_strdup(tmp + i);
        i += my_strlen(tmp + i);
    }
    ret[count] = NULL;
    return ret;
}
