#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "--------------testing1--------------\n" << std::endl;

	ClapTrap player1("player1");
	ClapTrap player2("player2");

	player1.attack("player2");
	player2.takeDamage(player1.getAttackDamage());
	player1.attack("player2");
	player2.takeDamage(player1.getAttackDamage());
	player1.attack("player2");
	player2.beRepaired(5);
	player1.attack("player2");

	std::cout << "--------------testing2--------------\n" << std::endl;

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

	std::cout << "--------------testing3--------------\n" << std::endl;
	return (0);
}
