#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap <Unknown> was created!!" << std::endl;
	name = "Unknown";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap	&other) : ClapTrap(other)
{
	std::cout << "ScavTrap <" << other.name << "> was copied!!" << std::endl;
	*this = other;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap <" << name << "> was created!!" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << this->name << "> dead!!" << std::endl;
}

void		ScavTrap::attack(const std::string	&target)
{
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints--;
		std::cout << "ScavTrap <" << this->name << "> attack <" << target << "> causing " << this->attackDamage << " points of damage!!" << std::endl;
	}
	else
		std::cout << "ScavTrap <"<< this->name << "> can't move!!" << std::endl;

}

void		ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap <" << this->name << "> have enterred in Gate keeper mode!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
