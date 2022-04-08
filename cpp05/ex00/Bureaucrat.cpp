#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown")
{	
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(std::string	name) : name(name)
{
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(const Bureaucrat	&other) : name(other.getName())
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
}

const Bureaucrat	&Bureaucrat::operator=(const Bureaucrat	&other)
{
	if (this != &other)
		this->grade = other.getGrade();
	return (*this);
}

int					Bureaucrat::getGrade() const
{
	return (this->grade);
}

const std::string	Bureaucrat::getName() const
{
	return (this->name);	
}

void				Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw	GradeTooHighException();
	else if (grade > 150)
		throw	GradeTooLowException();
	else
		this->grade = grade;
}

void				Bureaucrat::increment()
{
	if (this->getGrade() < 2)
		throw GradeTooHighException();
	else
		(this->grade)--;
}

void				Bureaucrat::decrement()
{
	if (this->getGrade() > 149)
		throw GradeTooLowException();
	else
		(this->grade)++;
}

//함수 뒤에 throw()를 붙이는 이유는 해당 함수가 Exception을 발생시키지 않는다는 것을 선언하는 것이다.
//22.04.03 msdocs에 올라온 글을 보면, C++17이후로 throw()문이 제거되었다. throw() 대신 noexcept를 사용하라고 한다.
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too Hight");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too Low");
}

std::ostream	&operator<<(std::ostream	&out, Bureaucrat const	&src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}
