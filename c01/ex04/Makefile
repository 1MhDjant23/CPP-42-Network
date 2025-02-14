NAME = losers

SRC = main.cpp	losers.cpp

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp	losers.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -rf $(NAME)

re:	fclean	all