##
## EPITECH PROJECT, 2023
## Lib Makefile
## File description:
## Placeholder
##

CC	 = cc

CFLAGS = -Wall -Wextra -Werror

all: clean build

build: *.c
	@$(CC) -c *.c
	@ar -rcs libmy.a *.o
	@rm *.o
	@cp libmy.a ../
	@cp *.h ../../include

clean:
	@rm -f ../*.a
