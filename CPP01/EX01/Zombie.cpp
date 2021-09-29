#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}