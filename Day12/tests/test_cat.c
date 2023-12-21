/*
** EPITECH PROJECT, 2023
** Pool Day 12
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(cat, check_if_file_is_a_missing)
{
    char *av[] = {"a.c", "a.c"};
    cr_assert_eq(cat(2, av), 84);
}

Test(cat, check_if_file_is_a_dir)
{
    char *av[] = {"test2/", "test2/"};
    cr_assert_eq(cat(2, av), 84);
}
