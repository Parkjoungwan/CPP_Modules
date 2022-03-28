/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:07:06 by joupark           #+#    #+#             */
/*   Updated: 2022/03/28 17:38:43 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name"), ScavTrap("Unknown_clap_name"), FragTrap("Unknown_clap_name")
{
	std::cout << "DiamondTrap <Unknown> was created!!" << std::endl;
	this->name = "Unknown";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << this->name << "> dead!!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap	&other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap <" << other.name << "> was copied!!" << std::endl;
	*this = other;
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
	std::cout << "DiamondTrap name is <" << this->name << "> and inherited ClapTrap name is <" << ClapTrap::name << ">" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const	&other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
