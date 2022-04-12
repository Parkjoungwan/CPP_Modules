#ifndef	PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public	Form
{
	public:
		PresidentialPardonForm(const PresidentialPardonForm	&other);
		PresidentialPardonForm(std::string	target);
		virtual ~PresidentialPardonForm();
		virtual bool	execute(Bureaucrat const	&executor) const;
		const PresidentialPardonForm	&operator=(const PresidentialPardonForm	&other);
	
	private:
		std::string	target;
};
#endif

