##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

NAME   = libbtree.a

SRC    = btree_create_node.c \
            btree_apply_prefix.c \
            btree_apply_infix.c \
            btree_apply_suffix.c \
            btree_insert_data.c \
            btree_search_item.c \

CC	   = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -I./include -c
	@ar -rcs $(NAME) *.o
	@rm -f *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
