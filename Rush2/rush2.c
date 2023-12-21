/*
** EPITECH PROJECT, 2023
** rush 2
** File description:
** rush2
*/

int rush(char *str , char a)
{
    int j = 0;

    for (int i = 0; str[i] != '\0' ; i++)
        j += (str[i] == a || str[i] == (a + 'A' - 'a')
    return j;
}
