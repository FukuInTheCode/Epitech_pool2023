##
## EPITECH PROJECT, 2023
## pool stumper
## File description:
## launch the whole function
##

SRC	=	main.c		\
		rush3.c		\
		rush1_1.c	\
		buffer_utils.c	\
		my_put_nbr.c	\
		rush1_2.c \
		rush1_5.c \
		rush1_4.c \
		rush1_345_line.c \
		rush1_2_line.c \
		rush1_345.c \
		rush1_45.c \
		rush1_3.c

OBJ = $(SRC:.c=.o)

NAME = rush3

LIB = libmy

CSFLAGS = -W -Wall -Wextra -I ./include

all : $(NAME)

$(NAME) : $(OBJ)
	make -C./lib/my re
	gcc -o $(NAME) $(OBJ) -L lib/ -l my

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	make -C./lib/my fclean

re : fclean all
