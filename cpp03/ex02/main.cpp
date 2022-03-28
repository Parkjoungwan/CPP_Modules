/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:25:18 by joupark           #+#    #+#             */
/*   Updated: 2022/03/28 17:41:57 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "--------------testing1--------------\n" << std::endl;
	{
		ClapTrap player1("player1");
		ClapTrap player2("player2");

		for (int i = 0; i < 5; i++)
		{
			player1.attack("player2");
			player2.takeDamage(player1.getAttackDamage());
		}
		for (int i = 0; i < 5; i++)
		{
			player1.beRepaired(5);
		}
		player1.attack("nothing");
		player2.takeDamage(10);
		std::cout << "\n--------------cleaning--------------\n" << std::endl;
	}
	std::cout << "\n--------------testing2--------------\n" << std::endl;
	{
		ScavTrap	st1("ST 1");
		ClapTrap	ct1("CT 1");

		ct1.attack("ST 1");
		st1.takeDamage(ct1.getAttackDamage());
		st1.guardGate();
		st1.beRepaired(10);
		st1.attack("CT 1");
		ct1.takeDamage(st1.getAttackDamage());
		std::cout << "\n--------------cleaning--------------\n" << std::endl;
	}
	std::cout << "\n--------------testing3--------------" << std::endl;
	{
		ScavTrap st1("ST 1");
		FragTrap ft1("FT 1");

		st1.guardGate();
		st1.beRepaired(10);
		st1.attack("FT 1");
		ft1.takeDamage(st1.getAttackDamage());

		ft1.highFivesGuys();
		for (int i = 0; i < 4; i++)
		{
			ft1.attack("ST 1");
			st1.takeDamage(ft1.getAttackDamage());
		}
		std::cout << "--------------cleaning--------------" << std::endl;
	}
	return (0);
}
