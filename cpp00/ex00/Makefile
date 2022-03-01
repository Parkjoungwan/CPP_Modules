CC = clang++
SRC = megaphone.cpp
FALGS = -Wall -Wextra -Werror
NAME = megaphone
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRC) $(FALGS) -o $(NAME)
.cpp.o:
	$(CC) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
