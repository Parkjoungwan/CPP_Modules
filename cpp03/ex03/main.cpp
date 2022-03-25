/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:25:18 by joupark           #+#    #+#             */
/*   Updated: 2022/03/23 13:42:55 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--------------testing1--------------\n" << std::endl;
	{
		ClapTrap player1("player1");
		ClapTrap player2("player2");

		player1.attack("player2");
		player2.takeDamage(player1.getAttackDamage());
		player1.attack("player2");
		player2.takeDamage(player1.getAttackDamage());
		player1.attack("player2");
		player2.beRepaired(5);
		player1.attack("player2");
	}
	std::cout << "--------------testing2--------------\n" << std::endl;
	{
		ScavTrap	st1("ST 1");
		ClapTrap	ct1("CT 1");

		ct1.attack("ST 1");
		st1.takeDamage(ct1.getAttackDamage());
		st1.guardGate();
		st1.attack("CT 1");
		ct1.takeDamage(st1.getAttackDamage());
		ct1.beRepaired(30);
		st1.attack("CT 1");
		ct1.takeDamage(st1.getAttackDamage());
		st1.attack("CT 1");
	}
	std::cout << "--------------testing3--------------\n" << std::endl;
	{
		ScavTrap st1("CT 1");
		FragTrap ft1("FT 1");

		st1.guardGate();
		st1.attack("FT 1");
		ft1.takeDamage(st1.getAttackDamage());

		ft1.beRepaired(40);
		ft1.attack("CT 1");
		st1.takeDamage(ft1.getAttackDamage());

		ft1.highFivesGuys();
		ft1.attack("CT 1");
		st1.takeDamage(ft1.getAttackDamage());
	}
	std::cout << "--------------testing4--------------\n" << std::endl;
	{
		DiamondTrap	dt1("DT 1");
		dt1.attack("CX");
		dt1.whoAmI();
	}
	return (0);
}
