##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	sources/initialisation/main.c		\
		sources/initialisation/map_parsing.c	\
		sources/initialisation/free_all.c	\
		sources/initialisation/basics.c		\
		sources/display/display.c		\
		sources/error/error_handling.c		\
		sources/process/process.c		\
		sources/process/transmissions.c		\
		sources/process/signal.c		\
		sources/process/server.c		\
		sources/process/client.c		\
		sources/process/roles.c			\

OBJ	=	$(SCR:.c=.o)

NAME	=	navy

CFLAGS	=	-Wall -Wextra -g

LDFLAGS	=	-Llib -lmy -lprintf -Llib/ -lstring

all:	$(NAME)

$(NAME):	$(OBJ)
	@echo -e "\e[0;32m==========================[ start compiling...\e[0m"
	@$(MAKE) --no-print-directory -C lib/my re
	@gcc $(CFLAGS) $(SRC) -o $(NAME) $(LDFLAGS)
	@rm -f vgcore*
	@echo -e "\e[0;32m==========================[ compiling: done\e[0m"

clean:
	@rm -f $(NAME)
	@rm -f *~
	@echo -e "\e[0;32m==========================[ remove binary: done\e[0m"
fclean: clean
	@rm -f $(OBJ)

re:	fclean all
	@$(MAKE) --no-print-directory -C lib/my fclean

test: re
	@echo -e "\e[0;32m==========================[ start exe...\e[0m"
	./$(NAME) map.txt
	@echo -e "\e[0;32m==========================[ exe: done\e[0m"
