##
## EPITECH PROJECT, 2023
## my_printf Makefile
## File description:
## Placeholder
##

NAME   = libmy.a

CC	   = gcc

CFLAGS = -Wall -Wextra -Wno-unused-value -Wno-sign-compare

SRC	= my_revstr.c	\
			my_put_float.c	\
			my_put_nbr.c	\
			my_strncat.c	\
			my_getnbr.c	\
			formats/a_format.c	\
			formats/amaj_format.c	\
			formats/e_format.c	\
			formats/emaj_format.c	\
			formats/u_format.c	\
			formats/n_format.c	\
			formats/hhn_format.c	\
			formats/hn_format.c	\
			formats/ln_format.c	\
			formats/zn_format.c	\
			formats/lln_format.c	\
			formats/s_format.c	\
			formats/di_format.c	\
			formats/ldi_format.c	\
			formats/lldi_format.c	\
			formats/zdi_format.c	\
			formats/c_format.c	\
			buffer_utils.c	\
			flags/zero_flags.c	\
			flags/plus_flags.c	\
			flags/hastag_flags.c	\
			flags/minus_flags.c	\
			flags/space_flags.c	\
			my_strcat.c	\
			my_strncmp.c	\
			my_strcpy.c	\
			my_strlen.c	\
			my_putptr_base.c	\
			my_fexpn.c	\
			my_printf.c	\
			my_put_unbr.c	\
			my_put_lnbr.c	\
			my_put_llnbr.c	\

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)

re: fclean all
