#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string	name);
		Bureaucrat(const Bureaucrat	&other);
		~Bureaucrat();
		int					getGrade(void) const;
		void				setGrade(int grade);
		const std::string	getName(void) const;
		void				increment();
		void				decrement();

		const Bureaucrat	&operator=(const Bureaucrat	&other);

		class GradeTooHighException : public std::exception {
			virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char	*what() const throw();
		};
	private:
		int					grade;
		const std::string	name;
};

std::ostream	&operator<<(std::ostream	&out, Bureaucrat	const &source);

#endif
