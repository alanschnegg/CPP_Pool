##
## EPITECH PROJECT, 2018
## mt makefile
## File description:
## none
##

NAME	=	my_cat

CC		=	gcc

CXX		=	g++

LIBS	=

LIB_DIR	=	-Llib/

CFLAGS		+=	-g3 -std=gnu11 -Wall -Wextra -Iinclude

CPPFLAGS	+=	-g3 -Wall -Wextra -Iinclude

SRCS_PREFIX	=	./

FILES		=	cat.cpp


MAIN		=	$(addprefix $(SRCS_PREFIX), main.cpp)

SRCS		=	$(addprefix $(SRCS_PREFIX), $(FILES))

OBJ			=	$(SRCS:.cpp=.o) $(MAIN:.cpp=.o)

all:	message $(NAME)


.PHONY: fclean clean all re tests_run

.SILENT:

RED		=\033[0;31m
GREEN	=\033[0;32m
BLUE	=\033[0;34m
YELLOW	=\033[0;33m
NC		=\033[0m
GREY	=\033[90m
BG_COLOR= \033[46m####\033[m

message:
	@echo -e '${BLUE}[ Compiling ]${NC}: ${YELLOW}./$(NAME)${NC}'

separation:
	@echo -e '${GREY}---------------------------------------------${NC}'

$(NAME): $(OBJ)
	@echo -e '${BG_COLOR}Flags: $(CPPFLAGS)${NC}'
	@echo -e '${BLUE}[ Create ]${NC}: ${YELLOW}./$(NAME)${NC}'
	@$(CXX) $(LIB_DIR) $(OBJ) -o $(NAME) $(LDFLAGS) $(LIBS)

%.o:		%.c
	@echo -e '${GREEN} [ OK ]${GREY} Build $<'
	@$(CXX) -o $@ $(CPPFLAGS) $(LIB_DIR) -c $<

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
	@echo -e '${GREY}---------------------------------------------${NC}'

re: fclean all
