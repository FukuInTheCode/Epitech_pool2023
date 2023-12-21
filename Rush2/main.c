/*
** EPITECH PROJECT, 2023
** Pool Day Rush2
** File description:
** Placeholder
*/

#include "inlude/my.h"

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc < 3)
        return 84;
    for (i; i != argc ; i++) {
    write(1, argv[i], 1);
    write(1, ":", 1);
    my_put_nbr(rush( argv[1], *(argv[i])));
    }
    return 0;
}
