#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructor 'WrongCat' called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat	&other)
{
	std::cout << "Constructor 'WrongCat' called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "Deconstructor 'WrongCat' called" << std::endl;
}

const WrongCat	&WrongCat::operator=(const WrongCat	&other)
{
	std::cout << "Assignation 'WrongCat' called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void			WrongCat::makeSound() const
{
	std::cout << "WrongCat!" << std::endl;
}

