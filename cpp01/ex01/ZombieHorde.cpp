#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N];
	std::string tempName;

	for (int i = 0; i < N; i++)
	{
		tempName = name + std::to_string(i + 1);
		horde[i].setName(tempName);
	}
	return (horde);
}
