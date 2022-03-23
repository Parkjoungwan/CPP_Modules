#include "ClapTrap.hpp"

int main()
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
	return (0);
}
