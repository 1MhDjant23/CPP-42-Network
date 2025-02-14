NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

%.o:%.cpp	Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	Zombie.hpp $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME) 

re:	fclean all
	