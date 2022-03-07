CC = clang++
SRC = Account.cpp tests.cpp
FALGS = -Wall -Wextra -Werror
NAME = test
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
