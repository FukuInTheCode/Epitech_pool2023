/*
** EPITECH PROJECT, 2023
** rush 2
** File description:
** rush2
*/

int rush(char *str , char a)
{
    int i = 0;
    int j = 0;

    for (i; str[i] != '\0' ; i++) {
        if (str[i] == a) {
            j++;
        }
    }
    return(j);
}
