#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
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
	this->_brain = new Brain(*cat._brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouwwww" << std::endl;
}

Brain&	Cat::getBrain() const
{
	return (*_brain);
}