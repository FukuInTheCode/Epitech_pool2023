/*
** EPITECH PROJECT, 2023
** Cpool final stumper
** File description:
** Placeholder
*/

#include "include/rush3.h"

int main(void)
{
    char buffer[BUFF_SIZE + 1] = {0};
    int len;

    for (len = read(0, buffer + my_strlen(buffer),
        BUFF_SIZE - my_strlen(buffer)); len > 0;
        len = read(0, buffer + my_strlen(buffer),
        BUFF_SIZE - my_strlen(buffer)));
    if (len < 0)
        return 84;
    write(1, buffer, my_strlen(buffer));
    return 0;
}
