##
## EPITECH PROJECT, 2023
## Lib Makefile
## File description:
## Placeholder
##

CC	 = cc

all: clean build clean

build: *.c
	@$(CC) -c *.c
	@ar -rcs libmy.a *.o
	@cp libmy.a ../

clean:
	@rm -f *.o

fclean: clean
	@rm -f libmy.a

re: fclean all
