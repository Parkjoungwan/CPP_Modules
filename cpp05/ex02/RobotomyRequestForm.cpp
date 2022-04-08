#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string	target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm	&other)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

bool						RobotomyRequestForm::execute(Bureaucrat const	&executor) const
{
	if (!this->Form::getSign())
	{
		std::cout << "The form isn't signed yet." << std::endl;
		return (false);
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << "Drilling Noise." << std::endl;
		srand((unsigned int)time(NULL));
		if (rand() % 2 == 1)
			std::cout << this->target << " has been robotomized successfully 50\% of the time. " << std::endl;
		else
			std::cout << this->target << " fail"<< std::endl;
		return (true);
	}
	else
		throw GradeTooLowException();
}

const RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		Form::operator=(other);
		this->target = other.target;
	}
	return (*this);
}
