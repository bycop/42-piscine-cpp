#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const &cure): AMateria("cure")
{
	_xp = cure._xp;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &cure)
{
	_xp = cure._xp;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}