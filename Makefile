##
## EPITECH PROJECT, 2018
## nanotekspice
## File description:
## makefile
##

CXX	=	g++

RM	=	rm -f

SRC	=	main.cpp		\
		src/TekSpice.cpp	\
		src/error/Error.cpp	\
		src/Parser/Parser.cpp

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
