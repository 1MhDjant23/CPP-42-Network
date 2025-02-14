NAME = violence

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp	Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(CFLAGS) -c $@ -o $<

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all