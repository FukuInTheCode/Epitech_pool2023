/*
** EPITECH PROJECT, 2023
** Cpool printf my_floor func
** File description:
** Placeholder
*/

#include "my.h"

double my_floor(double x)
{
    double fl = (double)((int)x);

    if (x >= 0)
        return fl;
    return ((fl == x) ? fl : fl - 1);
}
