// #include "ScavTrap.hpp"
// #include "DiamondTrap.hpp"
#include "DiamondTrap.hpp"

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

	// 1 Scav et 1 Clap a delete

	std::cout << "\n----------FragTrap----------" << std::endl;


	FragTrap fragclap = FragTrap("Jack");

	fragclap.attack("Joe");
	fragclap.takeDamage(5);
	fragclap.getHP();
	fragclap.takeDamage(5);
	fragclap.highFivesGuys();
	fragclap.beRepaired(10);
	
	// 1 Frag et 1 Clap a delete
	
	std::cout << "\n----------DiamondTrap----------" << std::endl;


	DiamondTrap diamondtrap = DiamondTrap("Mike");

	diamondtrap.attack("Joe");
	diamondtrap.takeDamage(5);
	scavclap.guardGate();
	diamondtrap.getHP();
	diamondtrap.takeDamage(5);
	scavclap.guardGate();
	diamondtrap.highFivesGuys();
	diamondtrap.beRepaired(10);
	diamondtrap.whoAmI();

	// 1 Diamond et 1 Scav et 1 Frag et 1 Clap a delete

	//Total:  1 diamond 2 scav 2 frag 3 clap

}
