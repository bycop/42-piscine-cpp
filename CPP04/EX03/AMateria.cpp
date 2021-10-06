#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(AMateria const &amateria)
{
	_type = amateria._type;
	_xp = amateria._xp;
}

AMateria	&AMateria::operator=(AMateria const &amateria)
{
	_xp = amateria._xp;
	_type = amateria._type;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType(void) const
{
	return (_type);
}

unsigned int AMateria::getXP(void) const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}