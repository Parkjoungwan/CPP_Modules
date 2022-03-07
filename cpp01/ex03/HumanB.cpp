#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with his bard hands" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
