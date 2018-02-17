##
## EPITECH PROJECT, 2018
## nanotekspice
## File description:
## makefile
##

CXX	=	g++

RM	=	rm -f

SRC	=	src/parser/Parser.cpp	\
		src/parser/Input.cpp	\
		src/parser/Clock.cpp	\
		src/parser/Output.cpp

NAME	=	nanotekspice

CXXFLAGS	= -I./include -Wall -Wextra -Werror 

OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CXX) $(OBJS) -o $(NAME) $(CXXFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
