/*
** EPITECH PROJECT, 2023
** Pool Day 05
** File description:
** Placeholder
*/


int my_compute_square_root(int nb)
{
    if (nb <= 0)
        return 0;
    if (nb == 1)
        return 1;
    for (int i = 0; i <= nb / 2; i++) {
        if (i * i == nb)
            return nb;
    }
    return 0;
}
