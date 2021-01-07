##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## navy
##

NAME		=	libstring.a

CC		=	cc

CFLAGS		+=	-g3 -std=gnu11 -Wall -Wextra -Iinclude

LIB	=	my_string.c	\
		assign.c	\
		append.c	\
		at.c	\
		clear.c	\
		size.c	\
		compare.c	\
		copy.c	\
		c_str.c	\
		empty.c	\
		find.c	\
		insert.c	\
		to_int.c	\
		split.c	\
		print.c	\
		join.c	\

OBJ		=	$(LIB:.c=.o)

RED	=\033[0;31m
GREEN	=\033[0;32m
BLUE	=\033[0;34m
YELLOW	=\033[0;33m
NC	=\033[0m
GREY	=\033[90m
BG_COLOR= \033[46m####\033[m


all:			message $(NAME)

message:
	@echo -e '${BLUE}[ Compiling ]${NC}: ${YELLOW}./$(NAME)${NC}'

$(NAME):	$(OBJ)
	@echo -e '${BLUE}[ Create ]${NC}: ${YELLOW}./$(NAME)${NC}'
	@ar rc $(NAME) $(OBJ)

%.o:		%.c
	@echo -e '${GREEN} [ OK ]${GREY} Build $<'
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)
	@rm -rf vgcore.*
	@rm -f gmon.out
	@rm -rf a.out
	@find . -name *.gc* -delete
	@echo -e '${RED}[ Clean ]${NC} : OK'

fclean:		clean
	@rm -rf $(NAME)
	@echo -e '${RED}[ Fclean ]${NC}: ./$(NAME) removed'

re:		fclean all

.PHONY: fclean clean all re message
