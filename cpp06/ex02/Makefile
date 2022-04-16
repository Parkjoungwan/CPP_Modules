CC = c++
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
FALGS = -std=c++98 -Wall -Wextra -Werror
NAME = ex02 
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
