CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
FALGS = -std=c++98 -Wall -Wextra -Werror
NAME = FragTrap
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
.cpp.o:
	$(CC) $(FALGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
