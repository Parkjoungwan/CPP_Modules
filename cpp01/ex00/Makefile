CC = clang++
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
FALGS = -Wall -Wextra -Werror
NAME = ZZom
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FALGS) -o $(NAME)
.cpp.o:
	$(CC) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
