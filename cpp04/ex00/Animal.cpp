#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor 'Animal' called." << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal	&other)
{
	std::cout << "Assignation 'Animal' called." << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Destructor 'Animal' called." << std::endl;
}

void			Animal::setType(std::string	type)
{
	this->type = type;
}

std::string		Animal::getType() const
{
	return(this->type);
}

void			Animal::makeSound() const
{
	std::cout << "Animal!" << std::endl;
}

const Animal	&Animal::operator=(const Animal	&other)
{
	std::cout << "Assignation 'Animal' called." << std::endl;
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}
