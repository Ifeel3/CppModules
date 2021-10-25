NAME	= Sed_is_for_losers
CC		= clang++
CFLAGS	= -std=c++98
SRC		= main.cpp
OBJ		= $(SRC:%.cpp=%.o)

.PHONY: all re clean fclean

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