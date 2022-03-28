/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:25:30 by joupark           #+#    #+#             */
/*   Updated: 2022/03/28 17:37:57 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap <Unknown> was created!!" << std::endl;
	name = "Unknown";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << this->name << "> dead!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap	&other) : ClapTrap(other)
{
	std::cout << "FragTrap <" << other.name << "> was copied!!" << std::endl;
	*this = other;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap <" << name << "> was created!!" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives Guys!!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const	&other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
