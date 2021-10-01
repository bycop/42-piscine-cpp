#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class ScavTrap;
class FragTrap;
class ClapTrap;

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const &diamondtrap);
	void attack(std::string const &target);
	void whoAmI();
	
private:
	std::string _name;

};

#endif
