#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *horde = zombieHorde(8, "Théo");

	for (int i = 0; i < 8; i++)
		horde[i].announce();
	
	delete[] horde;
	return (0);
}