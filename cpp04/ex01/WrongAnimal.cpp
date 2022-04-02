#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor 'WrongAnimal' called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal	&other)
{
	std::cout << "Constructor 'WrongAnimal' called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Deconstructor 'WrongAnimal' called" << std::endl;
}

void				WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal!" << std::endl;
}

void				WrongAnimal::setType(std::string	type)
{
	this->type = type;
}

std::string			WrongAnimal::getType() const
{
	return(this->type);
}

const WrongAnimal	&WrongAnimal::operator=(const WrongAnimal	&other)
{
	std::cout << "Assignation 'WrongAnimal' called" << std::endl;
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}
