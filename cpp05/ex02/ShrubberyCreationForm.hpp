#ifndef	SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const ShrubberyCreationForm	&other);
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		virtual bool	execute(Bureaucrat const	&executor) const;
		const ShrubberyCreationForm	&operator=(const ShrubberyCreationForm	&other);
	
	private:
		std::string	target;
};

#endif

