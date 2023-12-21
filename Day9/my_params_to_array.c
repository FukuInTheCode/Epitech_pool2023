/*
** EPITECH PROJECT, 2023
** Pool Day 09
** File description:
** Placeholder
*/

#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    INFO_T *ret = malloc(sizeof(INFO_T) * (ac + 1));

    ret[ac].str = NULL;
    for (int i = 0; i < ac; i++) {
        ret[i].length = my_strlen(av[i]);
        ret[i].str = av[i];
        ret[i].copy = my_strdup(av[i]);
        ret[i].word_array = my_str_to_word_array(av[i]);
    }
    return ret;
}
