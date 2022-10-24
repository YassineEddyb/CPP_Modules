SRC = main.cpp Bureaucrat.cpp 
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = Bureaucrat

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(CFLAGS) $(SRC) -o $(NAME) -fsanitize=address

clean:

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re