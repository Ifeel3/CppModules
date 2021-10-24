NAME	= Phonebook
SRC		= main.cpp Contact.class.cpp Phonebook.class.cpp
OBJ		= $(SRC:%.cpp=%.o)
CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

.PHONY: all re clean fclean

%.o: %.cpp
	$(CC) $(CFLAGS) -c $? -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all