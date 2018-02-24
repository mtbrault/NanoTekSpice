##
## EPITECH PROJECT, 2018
## nanotekspice
## File description:
## makefile
##

CXX	=	g++

RM	=	rm -f

SRC	=	src/parser/Parser.cpp		\
		src/components/Input.cpp		\
		src/parser/Clock.cpp		\
		src/components/Output.cpp		\
		src/components/C2716.cpp	\
		src/components/C4008.cpp	\
		src/components/C4011.cpp	\
		src/components/C4001.cpp	\
		src/components/C4013.cpp	\
		src/components/C4017.cpp	\
		src/components/C4030.cpp	\
		src/components/C4040.cpp	\
		src/components/C4069.cpp	\
		src/components/C4071.cpp	\
		src/components/C4081.cpp	\
		src/components/C4094.cpp	\
		src/components/C4514.cpp	\
		src/components/C4801.cpp	\
		src/Factory/Factory.cpp		\
		src/error/Error.cpp

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
