##
## EPITECH PROJECT, 2023
## Pool day 03
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
	@mv libmy.a ../

clean:
	@rm -f ../*.a
