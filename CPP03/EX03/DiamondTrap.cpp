#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap \e[32mcreated\e[39m." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_Clap"), FragTrap(name + "_Clap")
{
	std::cout << "DiamondTrap " << name << " \e[32mcreated\e[39m." << std::endl;
	_name = name;
	_hitpoints = ScavTrap::_hitpoints;
	_attackdamage = FragTrap::_attackdamage;
	_energypoints = ScavTrap::_energypoints;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " \e[31mdestroyed\e[39m." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	*this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
	_hitpoints = diamondtrap._hitpoints;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is \e[32m" << _name << "\e[39m and my Clap name is \e[32m" << ClapTrap::_name << "\e[39m" << std::endl;
}