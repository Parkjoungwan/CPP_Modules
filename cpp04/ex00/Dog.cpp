#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Constructor 'Dog' called" << std::endl;
}

Dog::Dog(const Dog	&other)
{
	std::cout << "Constructor 'Dog' called" << std::endl;
	*this = other;
}
Dog::~Dog()
{
	std::cout << "Destructor 'Dog' called" << std::endl;
}

void		Dog::makeSound() const
{
	std::cout << "Dog!" << std::endl;
}

const Dog	&Dog::operator=(const Dog	&other)
{
	std::cout << "Assignation 'Dog' called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

