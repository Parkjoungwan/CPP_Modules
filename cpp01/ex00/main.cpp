#include "Zombie.hpp"

int	main(void)
{
	Zombie* Z_1;
	Zombie* Z_2;
	Zombie* Z_3;
	Zombie* Z_4;

	Z_1 = newZombie("Kim");
	Z_2 = newZombie("Park");
	Z_3 = newZombie("Lee");
	Z_4 = newZombie("Won");
	randomChump("Ku");
	randomChump("Song");
	randomChump("Sang");
	delete Z_1;
	delete Z_2;
	delete Z_3;
	delete Z_4;
}
