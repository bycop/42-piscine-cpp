#include "Animal.hpp"

Animal::Animal()
{
	// std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &animal)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = animal._type;
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}