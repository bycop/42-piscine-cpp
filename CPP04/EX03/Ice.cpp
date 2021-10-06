#include "Ice.hpp"

Ice::Ice():	AMateria("ice")
{
}

Ice::Ice(Ice const &ice): AMateria("ice")
{
	_xp = ice._xp;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &ice)
{
	_xp = ice._xp;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}