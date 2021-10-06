#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
	std::cout << "Cat asignation operator called" << std::endl;
	this->_type = cat._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouwwww" << std::endl;
}