#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor 'Brain' called" << std::endl;
}

Brain::Brain(std::string	idea)
{
	std::cout << "Constructor 'Brain' called" << std::endl;
	this->ideas[0] = idea;
}

Brain::Brain(const Brain	&other)
{
	std::cout << "Constructor 'Brain' called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Destructor 'Brain' called" << std::endl;
}

const Brain	&Brain::operator=(const Brain	&other)
{
	std::cout << "Assignation 'Brain' called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}
