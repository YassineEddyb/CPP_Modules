SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = Brain

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re