#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap <Unknown> was created!!" << std::endl;
	name = "Unknown";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << this->name << "> dead!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap	&other)
{
	std::cout << "ClapTrap <" << other.name << "> was copied!!" << std::endl;
	*this = other;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap <" << name << "> was created!!" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

void			ClapTrap::setAttackDamage(unsigned int const	amount)
{
	this->attackDamage = amount;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void			ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints == 0 || this->hitPoints == 0)
		std::cout << "Clap Trap <" << this->name << "> can't move!!" <<std::endl;
	else
	{
		--(this->energyPoints);
		std::cout << "ClapTrap <" << this->name << "> attack <" << target <<">, causing " << this->attackDamage << " points of damage!!" << std::endl;
	}
}

void			ClapTrap::takeDamage(unsigned int	amount)
{
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap <" << this->name << "> take " << amount << " of damage!!" << std::endl;
		std::cout << "ClapTrap <" << this->name << "> passed out!!" << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap <" << this->name << "> take " << amount << " of damage!!" << std::endl;
	}
}

void			ClapTrap::beRepaired(unsigned int	amount)
{
	if (this->energyPoints == 0 || this->hitPoints == 0)
		std::cout << "Clap Trap <" << this->name << "> can't move!!" <<std::endl;
	else
	{
		std::cout << "ClapTrap <" << this->name << "> was repaired by " << amount << " of hit points!!" << std::endl;
		this->hitPoints += amount;
		--(this->energyPoints);
	}
}

ClapTrap	&ClapTrap::operator = (ClapTrap const	&other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
