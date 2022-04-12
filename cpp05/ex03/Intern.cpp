#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	formList[0] = "shrubbery creation";
	formList[1] = "robotomy request";
	formList[2] = "presidential pardon";
}

Intern::Intern(const Intern	&other)
{
	*this = other;
}

Intern	&Intern::operator=(const Intern	&other)
{
	if (this != &other)
	{
		formList[0] = other.formList[0];
		formList[1] = other.formList[1];
		formList[2] = other.formList[2];
	}
	return	*this;
}

Intern::~Intern()
{
}

Form	*Intern::makeShrubberyForm(const std::string	&target) const
{
	return	(new	ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomyForm(const std::string	&target) const
{
	return (new	RobotomyRequestForm(target));
}

Form	*Intern::makePresidentialForm(const std::string	&target) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(const std::string	&formName, const std::string	&target) const
{
	Form	*(Intern::*makeForms[3])(const std::string	&) const =
	{
		&Intern::makeShrubberyForm,
		&Intern::makeRobotomyForm,
		&Intern::makePresidentialForm,
	};
	for (int i = 0; i < 3; i++)
	{
		if (formList[i] == formName)
		{
			std::cout << "Intern creates " << formName << " form" << std::endl;
			return (this->*makeForms[i])(target);
		}
	}
	std::cerr << "No matched Form" << std::endl;
	return (NULL);
}
