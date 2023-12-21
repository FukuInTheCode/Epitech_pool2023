##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

NAME   = libbtree.a

SRC    = btree_create_node.c \

CC	   = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -c
	@ar -rcs $(NAME) *.o
	@rm -f *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
