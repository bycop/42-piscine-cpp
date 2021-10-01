#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap \e[32mcreated\e[39m." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " \e[32mcreated\e[39m." << std::endl;
	_name = name;
	_hitpoints = 100;
	_attackdamage = 30;
	_energypoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " \e[31mdestroyed\e[39m." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
	_hitpoints = fragtrap._hitpoints;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " Ask you a HIGH FIVESSSS ✋" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << _name << " \e[32mattack\e[39m " << target << ", causing " << _attackdamage << " points of damage !" << std::endl;
}