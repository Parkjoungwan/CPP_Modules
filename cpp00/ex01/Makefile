CC = clang++
SRC = src/Contact.cpp src/Phonebook.cpp src/main.cpp
FALGS = -Wall -Wextra -Werror
NAME = Phonebooking
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FALGS) -o $(NAME)
.cpp.o:
	$(CC) -I./includes -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
