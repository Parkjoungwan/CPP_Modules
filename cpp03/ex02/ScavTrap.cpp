#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	name = "Unknown";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << this->name << "> dead!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap	&other) : ClapTrap(other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

std::string	ScavTrap::getName(void) const
{
	return (this->name);
}

void		ScavTrap::attack(std::string const	&target)
{
	if (this->energyPoints < this->attackDamage)
		std::cout << "ScavTrap <" << this->name << "> not enought Energy!!" << std::endl;
	else
	{
		this->energyPoints -= this->attackDamage;
		std::cout << "ScavTrap <" << this->name << "> attack <" << target << ">, causing " << this->attackDamage << " points of damage!!" << std::endl;
	}
}

void		ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap <" << this->name << "> have enterred in Gate keeper mode!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const	&other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
