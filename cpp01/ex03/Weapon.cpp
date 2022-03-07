#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string	&Weapon::getType(void)
{
	return (this->_type);
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}
