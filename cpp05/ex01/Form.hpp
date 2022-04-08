#ifndef	FORM_HPP
#define	FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const Form	&other);
		Form(std::string	name, int	gradeToSign, int gradeToExecute);
		~Form();

		const std::string	getName() const;
		bool				getSign() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				beSigned(const Bureaucrat	&clerk);

		const Form			&operator=(const Form	&other);

		class	GradeTooHighException: public	std::exception{
			virtual const char	*what() const throw();
		};
		class	GradeTooLowException: public	std::exception{
			virtual const char	*what() const throw();
		};

	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
};
std::ostream	&operator<<(std::ostream	&out, Form const	&src);

#endif
