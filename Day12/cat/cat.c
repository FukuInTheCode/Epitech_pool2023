/*
** EPITECH PROJECT, 2023
** Pool Day 12
** File description:
** Placeholder
*/

#include "../include/my.h"
#include <errno.h>
#include <fcntl.h>

static void reset(char *buffer)
{
    for (int i = 0; buffer[i]; buffer[i++] = 0);
}

static int read_stdin(void)
{
    for (char buffer[32000] = {0}; read(0, buffer, 32000) > 0;
        reset(buffer))
        my_putstr(buffer);
    return 0;
}

static int my_stderr(char *f, int err)
{
    write(2, "cat : ", 6);
    write(2, f, my_strlen(f));
    write(2, " : ", 3);
    if (err == ENOENT) {
        write(2, "No such file or directory",
            my_strlen("No such file or directory"));
    }
    if (err == EISDIR)
        write(2, "Is a directory", my_strlen("Is a directory"));
    write(2, "\n", 1);
    return 84;
}

static int read_files(int ac, char *argv[])
{
    int file;
    char buffer[32000] = { 0 };

    for (int i = 1; i < ac; i++) {
        file = open(argv[i], O_RDONLY);
        if (errno != 0)
            return my_stderr(argv[i], errno);
        read(file, buffer, 32000);
        my_putstr(buffer);
        reset(buffer);
    }
    return 0;
}

int cat(int argc, char *argv[])
{
    if (argc == 1)
        return read_stdin();
    return read_files(argc, argv);
}
