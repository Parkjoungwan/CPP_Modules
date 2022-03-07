#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiiinnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << ": Death is not an escape" <<std::endl;
	return ;
}
