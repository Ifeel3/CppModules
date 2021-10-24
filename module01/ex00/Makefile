NAME	= Zombie
CC		= clang++
CFLAGS	= -std=c++98
SRC		= main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp
OBJ		= $(SRC:%.cpp=%.o)

.PHONY: all re clean fclean

%.o: %.cpp
	$(CC) $(CFLAGS) -c $? -o $@

all: $(NAME)

$(NAME): $(OBJ) Zombie.hpp
	$(CC) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all