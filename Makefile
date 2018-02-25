##
## EPITECH PROJECT, 2018
## nanotekspice
## File description:
## makefile
##

CXX	=	g++

RM	=	rm -f

SRC	=	main.cpp			\
		src/TekSpice.cpp		\
		src/error/Error.cpp		\
		src/parser/Parser.cpp		\
		src/Factory/Factory.cpp		\
		src/components/C4081.cpp	\
		src/components/Output.cpp	\
		src/components/Input.cpp

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
