#include "ClapTrap.hpp"

int main()
{
	std::cout << "--------------testing1--------------\n" << std::endl;
	ClapTrap player1("player1");
	ClapTrap player2("player2");

	player1.attack("player2");
	player2.takeDamage(player1.getAttackDamage());
	player1.attack("player2");
	player2.takeDamage(player1.getAttackDamage());
	player2.attack("player1");
	player1.takeDamage(player2.getAttackDamage());
	player2.beRepaired(5);
	player1.attack("player2");
	player2.takeDamage(player1.getAttackDamage());
	return (0);
}
