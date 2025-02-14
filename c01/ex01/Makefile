NAME = zombieHorde

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp zombieHorde.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp	Zombie.hpp
	$(CC) $(CFLAGS) -c $@ -o $<

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	@rm -f $(OBJ)

re:	fclean all