SRC = main.cpp PmergeMe.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = PmergeMe

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(CFLAGS) $(SRC) -o $(NAME)

clean :

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re