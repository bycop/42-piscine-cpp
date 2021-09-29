#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
	const std::string &ref = _type;
	return (ref);
}

void Weapon::setType(std::string type)
{
	_type = type;
}