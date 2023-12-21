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
    if (my_strncmp(buffer, "Invalid size\n",
        my_strlen("Invalid size\n"))) {
        write(1, "none\n", 5);
        return 0;
    }
    rush3(buffer);
    return 0;
}
