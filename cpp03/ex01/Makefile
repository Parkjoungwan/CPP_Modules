CC = clang++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
FALGS = -Wall -Wextra -Werror
NAME = ScavTrap
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
