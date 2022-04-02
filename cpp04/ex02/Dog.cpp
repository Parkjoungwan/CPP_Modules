#include "Dog.hpp"

Dog::Dog() : dogBrain(new Brain("Dog's ideas"))
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
	delete this->dogBrain;
}

void		Dog::makeSound() const
{
	std::cout << "Dog!" << std::endl;
}

const Dog	&Dog::operator=(const Dog	&other)
{
	std::cout << "Assignation 'Dog' called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->dogBrain = new Brain(*(other.dogBrain));
	}
	return (*this);
}

