#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm" , 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm	&other) : Form(other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

bool						ShrubberyCreationForm::execute(Bureaucrat const	&executor) const
{
	if (!this->Form::getSign())
	{
		std::cout << "The form isn't signed." << std::endl;
		return (false);
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::fstream	to_read;
		std::fstream	to_write;
		std::string		buf;
		buf += " _\n";
		buf += "| |\n";
		buf += "| |_ _ __ ___  ___\n";
		buf += "| __| '__/ _ \\/ _ \\\n";
		buf += "| |_| | |  __/  __/\n";
		buf += " \\__|_|  \\___|\\___|\n";
		to_write.open(this->target + "_shrubbery", std::fstream::out | std::fstream::trunc);
		to_write.write(buf.c_str(), buf.length());
		return (true);
	}
	else
		throw GradeTooLowException();
}

const ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm	&other)
{
	if (this != &other)
	{
		Form::operator=(other);
		this->target = other.target;
	}
	return (*this);
}
