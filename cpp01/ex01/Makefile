CC = clang++
SRC = main.cpp Zombie.cpp ZombieHorde.cpp
FALGS = -Wall -Wextra -Werror
NAME = ZZom2
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
