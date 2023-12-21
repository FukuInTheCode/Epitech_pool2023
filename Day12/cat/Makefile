##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

NAME   = cat

SRC    = main.c \
            cat.c

CC	   = cc

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME): Build
	@$(CC) $(CFLAGS) *.o -o $(NAME) -L../lib -lmy

Build:
	@make -C../lib/my
	@$(CC) $(CFLAGS) -c $(SRC) -L../lib -lmy

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
