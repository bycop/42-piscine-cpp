#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	delete _brain;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
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