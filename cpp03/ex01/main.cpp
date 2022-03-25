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
	player2.attack("player1");
	player1.takeDamage(player2.getAttackDamage());
	player2.beRepaired(5);
	player1.attack("player2");
	player2.takeDamage(player1.getAttackDamage());
	
	std::cout << "\n--------------testing2--------------\n" << std::endl;

	ScavTrap	st1("ST 1");
	ClapTrap	ct1("CT 1");

	ct1.attack("ST 1");
	st1.takeDamage(ct1.getAttackDamage());
	st1.guardGate();
	st1.beRepaired(10);
	ct1.attack("ST 1");
	st1.takeDamage(ct1.getAttackDamage());
	st1.beRepaired(10);
	ct1.attack("ST 1");
	st1.takeDamage(ct1.getAttackDamage());
	st1.beRepaired(10);

	std::cout << "\n--------------cleaning--------------\n" << std::endl;
	return (0);
}
