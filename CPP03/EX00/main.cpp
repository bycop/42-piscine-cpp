#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap = ClapTrap("Joe");

	clap.attack("Jim");
	clap.takeDamage(5);
	clap.getHP();
	clap.takeDamage(5);
	clap.beRepaired(10);
}