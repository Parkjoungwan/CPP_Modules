#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	return (0);
}
