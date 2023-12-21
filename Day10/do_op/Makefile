##
## EPITECH PROJECT, 2023
## Pool day 10
## File description:
## Placeholder
##

NAME   = do_op

CC	   = cc

CFLAGS = -Werror -Wall -Wextra

SRC	= main.c \
	    operators.c

all: build clean

build: $(SRC)
	@cd ../lib/my && make && cd ../../do_op
	@$(CC) $(CFLAGS) $(SRC) -L../lib -lmy -o $(NAME)

fclean: clean
	@cd ../lib/my && make clean && cd ../../do_op
	@rm -f $(NAME)

clean:
	@rm -f *.o

re: fclean all
