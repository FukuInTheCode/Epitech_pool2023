##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

NAME   = cat

SRC    = main.c

CC	   = cc

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME): OBJ
	@$(CC) $(CFLAGS) *.o -o $(NAME)

OBJ:
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
