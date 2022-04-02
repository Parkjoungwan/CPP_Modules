#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Constructor 'Cat' called" << std::endl;
}

Cat::Cat(const Cat	&other)
{
	std::cout << "Constructor 'Cat' called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Destructor 'Cat' called" << std::endl;
}


void		Cat::makeSound() const
{
	std::cout << "Cat!" << std::endl;
}

const Cat	&Cat::operator=(const Cat	&other)
{
	std::cout << "Assigantion 'Cat' called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}
