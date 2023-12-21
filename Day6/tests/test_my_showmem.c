/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_showmem, ram_infos)
{
    char str[] = "Hello je suis une merde totale";
    my_showmem(str, sizeof(str));
    my_showmem(str, sizeof(str) - 1);
}
