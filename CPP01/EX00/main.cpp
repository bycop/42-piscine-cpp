#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int	main(void)
{
	Zombie	*heap_zombie = newZombie("Bob");
	heap_zombie->announce();
	delete heap_zombie;

	randomChump("Luke");
	return (0);
}