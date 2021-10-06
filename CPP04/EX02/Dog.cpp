#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
	std::cout << "Dog asignation operator called" << std::endl;
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