#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &claptrap);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &claptrap);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void getHP(void);

protected:
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energypoints;
	unsigned int _attackdamage;

};

#endif