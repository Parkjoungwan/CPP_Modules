#include "ClapTrap.hpp"

int main()
{
	std::cout << "--------------testing1--------------\n" << std::endl;
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

	std::cout << "--------------cleaning--------------\n" << std::endl;
	return (0);
}
