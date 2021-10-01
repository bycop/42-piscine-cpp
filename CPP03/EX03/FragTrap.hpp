#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

# include <iostream>
# include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();
	FragTrap &operator=(FragTrap const &fragtrap);

	void highFivesGuys(void);
	void attack(std::string const &target);
	
private:

};

#endif
