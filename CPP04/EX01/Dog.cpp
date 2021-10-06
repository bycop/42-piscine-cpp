#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	delete _brain;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	this->_brain = new Brain(*dog._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waoouffff" << std::endl;
}

Brain&	Dog::getBrain() const
{
	return (*_brain);
}