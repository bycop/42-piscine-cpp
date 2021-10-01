#ifndef SCAVTRAP_CPP
#define SCAVTRAP_CPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &scavtrap);

	void guardGate(void);
	void attack(std::string const &target);

private:
	bool _guardMode;

};

#endif
