CC = c++

FLAGS = -Wall -Wextra -Werror  -std=c++98

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

NAME =  HARL_2.0

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
