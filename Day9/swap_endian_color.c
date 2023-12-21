/*
** EPITECH PROJECT, 2023
** Pool Day 09
** File description:
** Placeholder
*/

#include "include/my.h"

int swap_endian_color(int color)
{
    char *bytes = (char *)&color;
    char tmp = 0;

    tmp = bytes[0];
    bytes[0] = bytes[3];
    bytes[3] = tmp;
    tmp = bytes[1];
    bytes[1] = bytes[2];
    bytes[2] = tmp;
    return *(int *)bytes;
}
