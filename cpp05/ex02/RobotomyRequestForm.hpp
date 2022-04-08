#ifndef	ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public	Form
{
	public:
		RobotomyRequestForm(const RobotomyRequestForm	&other);
		RobotomyRequestForm(std::string	target);
		virtual ~RobotomyRequestForm();
		virtual bool	execute(Bureaucrat const	&executor) const;
		const RobotomyRequestForm	&operator=(const RobotomyRequestForm	&other);
	
	private:
		std::string	target;
};

#endif
