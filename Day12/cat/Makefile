##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Placeholder
##

NAME   = cat

NAME_T   = ../tests/test_run

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

tests_run:
<<<<<<< HEAD
	@$(CC) $(CFLAGS) cat.c ../tests/test_cat.c -L../lib -lmy
	     -lcriterion -o ../tests/test_run
=======
	@$(CC) $(CFLAGS) cat.c ../tests/test_cat.c $(CRITERION) -o $(NAME_T)
>>>>>>> 6a0839e ([~] Update.)
	@cd ../tests && ./test_run && rm ./test_run && cd ../cat

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
