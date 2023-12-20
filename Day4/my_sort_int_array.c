/*
** EPITECH PROJECT, 2023
** Pool Day 04
** File description:
** Placeholder
*/

#include "my.h"

static void move_int(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1])
            my_swap(array + i, array + i + 1);
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
        move_int(array, size);
}
