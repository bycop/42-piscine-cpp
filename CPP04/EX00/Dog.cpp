#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = dog._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waoouffff" << std::endl;
}