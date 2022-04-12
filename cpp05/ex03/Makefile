CC = c++
SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
FALGS = -std=c++98 -Wall -Wextra -Werror
NAME = ex03
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
.cpp.o:
	$(CC) $(FALGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)  *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
