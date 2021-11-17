NAME	= a.out
SRC		= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJ		= $(SRC:%.cpp=%.o)
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
CXX		= c++

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