#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return ;
}

HumanA::HumanA(std::string	name, Weapon	&weapon) : _weapon(weapon), _name(name)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}
