##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	classic_lib/my_getnbr.c		\
		classic_lib/my_putchar.c	\
		classic_lib/my_putstr.c		\
		classic_lib/my_strlen.c		\
		classic_lib/my_put_nbr.c	\
		classic_lib/my_nbr_count.c	\
		classic_lib/my_strcpy.c		\
		classic_lib/my_strcmp.c		\
		classic_lib/octal_convert.c	\
		classic_lib/my_str_to_array.c	\
		classic_lib/my_str_to_array_n.c	\
		classic_lib/fd.c		\
		classic_lib/check_fct.c		\
		classic_lib/my_strcat.c		\
		classic_lib/get_next_line.c	\
		classic_lib/skip_crt.c		\
		classic_lib/free_fct.c		\
		classic_lib/is_thing.c		\
		classic_lib/triple_array.c	\
		classic_lib/my_str_to_int_array.c	\
		classic_lib/my_swap.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@mv $(NAME) -t ../
	@$(MAKE) --no-print-directory -C classic_lib/my_printf re

clean:
	@rm -f $(NAME)

fclean: clean
	@$(MAKE) --no-print-directory -C classic_lib/my_printf fclean
	@rm -f classic_lib/*.o
	@rm -f ../*.o
	@rm -f ./*.o
	@rm -f *~

re:	fclean all
