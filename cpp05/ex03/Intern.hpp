#ifndef	INTERN_HPP
#define	INTERN_HPP

#include "Form.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern	&other);
		~Intern();
		Intern	&operator=(const Intern	&other);

		Form	*makeForm(const std::string	&formName, const std::string	&target) const;
		Form	*makeShrubberyForm(const std::string	&target) const;
		Form	*makeRobotomyForm(const std::string	&target) const;
		Form	*makePresidentialForm(const std::string	&target) const;
	
	private:
		std::string formList[3];
};

#endif
