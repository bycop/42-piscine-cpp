#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap \e[32mcreated\e[39m." << std::endl;
	_hitpoints = 10;
	_attackdamage = 0;
	_energypoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " \e[32mcreated\e[39m." << std::endl;
	_name = name;
	_hitpoints = 10;
	_attackdamage = 0;
	_energypoints = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " \e[31mdestroyed\e[39m." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &claptrap)
{
	_hitpoints = claptrap._hitpoints;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " \e[32mattack\e[39m " << target << ", causing " << _attackdamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitpoints)
	{
		_hitpoints = 0;
		std::cout << "ClapTrap " << _name << " \e[31mhas been attacked\e[39m and lose " << amount << " HP ! And.. it is \e[31mdead\e[39m. You can maybe repair him !" << std::endl;
		return ;
	}
	_hitpoints -= amount;
	std::cout << "ClapTrap " << _name << " \e[31mhas been attacked\e[39m and lose " << amount << " HP ! it has now " << _hitpoints << " HP." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	std::cout << "ClapTrap " << _name << " \e[32mhas been repaired\e[39m and win " << amount << " HP ! it has now " << _hitpoints << " HP." << std::endl;
}

void	ClapTrap::getHP(void)
{
	std::cout << "ClapTrap " << _name << " has " << _hitpoints << " HP" << std::endl;
}
