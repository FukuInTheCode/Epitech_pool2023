##
## EPITECH PROJECT, 2023
## pool stumper
## File description:
## launch the whole function
##

SRC	=	main.c	\
		rush3.c	\

OBJ = $(SRC:.c=.o)

NAME = rush3

LIB = libmy

CSFLAGS = -W -Wall -Wextra -I ./include

all : $(NAME)

lib :
	make -C./lib/my re

$(NAME) : lib $(OBJ)
	gcc -o $(NAME) $(OBJ) -L lib/my -l my

clean:
	rm *.o

fclean: clean all
	rm -f libmy.a

re : fclean all
