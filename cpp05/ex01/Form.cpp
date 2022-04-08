#include "Form.hpp"

Form::Form() : name("Unknown"), gradeToSign(150), gradeToExecute(150)
{
	this->isSigned = false;
}

Form::Form(const Form	&other) : name(other.getName()), gradeToSign(other.gradeToSign), gradeToExecute(other.getGradeToExecute())
{
	*this = other;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (this->getGradeToSign() < 1)
		throw GradeTooHighException();
	else if (this->getGradeToSign() > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
}

const std::string	Form::getName() const
{
	return (this->name);
}

bool				Form::getSign() const
{
	return (this->isSigned);
}

int					Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int					Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

bool				Form::beSigned(const Bureaucrat	&clerk)
{
	if (clerk.getGrade() <= this->getGradeToSign())
	{
		this->isSigned = true;
		return (true);
	}
	return (false);
}

const Form			&Form::operator=(const Form	&other)
{
	if (this != &other)
	{
		this->isSigned = other.getSign(); 
	}
	return (*this);
}

const char			*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high, try 1 to 150");
}

const char			*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low, try 1 to 150");
}

std::ostream		&operator<<(std::ostream	&out, Form const	&src)
{
	std::string	msg;

	msg = src.getSign() ? ", sign = is sigend" : ", sign = isn't signed";
	out << "Form " << src.getName() << ", grade to sign = " << src.getGradeToSign() << ", grade to execute = " << src.getGradeToExecute() << msg;
	return (out);
}
