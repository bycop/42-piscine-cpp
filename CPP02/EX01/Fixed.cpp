#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_points = number * powf(2, _fractional);
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_points = roundf(number * powf(2, _fractional));
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed_points = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_fixed_points);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed_points = raw;
}

float Fixed::toFloat(void) const
{
	return (_fixed_points / powf(2, _fractional));
}

int Fixed::toInt(void) const
{
	return (roundf(_fixed_points / pow(2, _fractional)));
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
