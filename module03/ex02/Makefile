NAME	= a.out
SRC		= ClapTrap.cpp main.cpp FragTrap.cpp
OBJ		= $(SRC:%.cpp=%.o)
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
CXX		= clang++

.PHONY: all clean fclean re

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $? -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all