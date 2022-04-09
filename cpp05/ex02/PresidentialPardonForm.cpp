#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm	&other) : Form(other)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

bool	PresidentialPardonForm::execute(Bureaucrat const	&executor) const
{
	if (!this->Form::getSign())
	{
		std::cout << "The form isn't signed." << std::endl;
		return (false);
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
		return (true);
	}
	else
		throw GradeTooLowException();
}

const PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm	&other)
{
	if (this != &other)
	{
		Form::operator=(other);
		this->target = other.target;
	}
	return (*this);
}
