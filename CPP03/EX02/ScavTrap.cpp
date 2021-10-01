#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap \e[32mcreated\e[39m." << std::endl;
	_guardMode = false;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " \e[32mcreated\e[39m." << std::endl;
	_name = name;
	_hitpoints = 100;
	_attackdamage = 50;
	_energypoints = 20;
	_guardMode = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " \e[31mdestroyed\e[39m." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
	_hitpoints = scavtrap._hitpoints;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	_guardMode = !_guardMode;
	if (_guardMode)
		std::cout << "ScavTrap " << _name << " have \e[32menterred\e[39m in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " have \e[31mleaved\e[39m the Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " \e[32mattack\e[39m " << target << ", causing " << _attackdamage << " points of damage !" << std::endl;
}