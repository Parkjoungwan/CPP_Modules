/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:07:06 by joupark           #+#    #+#             */
/*   Updated: 2022/03/23 13:41:26 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "Unknown DiamondTrap";
	ScavTrap::name = "Unknown ScavTrap";
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << this->name << "> dead!!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap	&other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

DiamondTrap::DiamondTrap(std::string input) : ClapTrap(input + "_clap_name"), ScavTrap(input + "_clap_name"), FragTrap(input + "_clap_name")
{
	std::cout << "DiamondTrap <" << input << "> was created!!" << std::endl;
	this->name = input;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

void	DiamondTrap::attack(std::string const	&target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is <" << this->name << "> and my Class name is <" << ClapTrap::name << ">" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const	&other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
