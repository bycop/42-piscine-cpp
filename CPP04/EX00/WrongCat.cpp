#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = wrongcat;
}

WrongCat& WrongCat::operator=(WrongCat const &wrongcat)
{
	std::cout << "WrongCat asignation operator called" << std::endl;
	this->_type = wrongcat._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouwwww" << std::endl;
}