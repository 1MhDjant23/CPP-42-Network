NAME = DiamondTrap

CC = c++

HDR = ClapTrap.hpp	ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRC = main.cpp ClapTrap.cpp	ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.c  $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all