/*
** EPITECH PROJECT, 2023
** Pool Day 09
** File description:
** Placeholder
*/

#include "../include/my.h"

Test(swap_endian_color, swap_endianess_color)
{
    printf("%d, %d\n", 0x78563412, swap_endian_color(0x12345678));
    cr_assert(0x78563412 == swap_endian_color(0x12345678));
}
