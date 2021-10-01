#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "----------ScavTrap----------" << std::endl;

	ScavTrap scavclap = ScavTrap("Joe");

	scavclap.attack("Jack");
	scavclap.takeDamage(5);
	scavclap.getHP();
	scavclap.takeDamage(5);
	scavclap.guardGate();
	scavclap.beRepaired(10);
	scavclap.guardGate();

	std::cout << "\n----------ScavTrap----------" << std::endl;


	FragTrap fragclap = FragTrap("Jack");

	fragclap.attack("Joe");
	fragclap.takeDamage(5);
	fragclap.getHP();
	fragclap.takeDamage(5);
	fragclap.highFivesGuys();
	fragclap.beRepaired(10);

}
