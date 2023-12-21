##
## EPITECH PROJECT, 2023
## Pool day 10
## File description:
## Placeholder
##

NAME   = my_advanced_do_op

CC	   = gcc

CFLAGS = -Werror -Wall -Wextra

SRC	= main.c \
	    operators.c

all: build clean

build: $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -L../lib -lmy -c
	@$(CC) $(CFLAGS) *.o -L../lib -lmy -o $(NAME)

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f *.o

re: fclean all
