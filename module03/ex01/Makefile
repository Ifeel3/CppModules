NAME	= ScavTrap
SRC		= ClapTrap.cpp main.cpp
OBJ		= $(SRC:%.cpp=%.o)
CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wno-shadow

.PHONY: all clean fclean re

%.o: %.cpp
	$(CC) $(CFLAGS) -c $? -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all