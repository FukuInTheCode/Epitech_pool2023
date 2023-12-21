##
## EPITECH PROJECT, 2023
## Pool day 10
## File description:
## Placeholder
##

CC	   = cc

CFLAGS = -Werror -Wall -Wextra

SRC	= main.c \
	    operators.c

all: clean build clean


build: $(SRC)
	@make -f ../lib/my/Makefile
	@$(CC) $(CFLAGS) $(SRC) -L../lib/ -lmy

clean:
	@make -f ../lib/my/Makefile clean
	@rm -f *.out
