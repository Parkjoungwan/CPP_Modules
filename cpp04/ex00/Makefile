CC = c++
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp 
FALGS = -std=c++98 -Wall -Wextra -Werror
NAME = ex00 
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
