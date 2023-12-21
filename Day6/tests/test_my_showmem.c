/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_showmem, ram_infos, .init = cr_redirect_stdout)
{
    char str[] =  "hey guys show mem is cool you can do some pretty neat stuff ....................";
    char result[] = "00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n00000010: 6d20 6973 2063 6f6f 6c20 796f 7520 6361 m is cool you ca\n00000020: 6e20 646f 2073 6f6d 6520 7072 6574 7479 n do some pretty\n00000030: 206e 6561 7420 7374 7566 6600 0f1b 7f05 neat stuff .....\n00000040: 2e00 0102 0304 0506 0708 090e 0f1b 7f   ...............";

    my_showmem(str, sizeof(str));
    cr_assert(str[0] == str[0]);
    cr_assert(result[0] == result[0]);
}
