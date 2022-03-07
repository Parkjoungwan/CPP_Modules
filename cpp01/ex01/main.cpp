#include "Zombie.hpp"

int	main (void)
{
	Zombie *zombies;
	int N;

	std::cout << "How many Zombie will coming: ";
	std::cin >> N;
	zombies = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
}
