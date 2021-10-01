#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap clap = ScavTrap("Joe");

	clap.attack("Jim");
	clap.takeDamage(5);
	clap.getHP();
	clap.takeDamage(5);
	clap.guardGate();
	clap.beRepaired(10);
	clap.guardGate();
}