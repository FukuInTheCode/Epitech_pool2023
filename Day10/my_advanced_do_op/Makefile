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
	@cd ../lib/my && make && cd ../../my_advanced_do_op
	@$(CC) $(CFLAGS) $(SRC) -L../lib/ -lmy

clean:
	@cd ../lib/my && make clean && cd ../../my_advanced_do_op
	@rm -f *.out
