/*
** EPITECH PROJECT, 2023
** Pool Day Rush 1
** File description:
** Placeholder
*/

#include "../my.h"

int rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return 0;
    }
    draw(x, y, "-|oooo");
    return 1;
}
