#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_points = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int number)
{
	_fixed_points = number * powf(2, _fractional);
}

Fixed::Fixed(const float number)
{
	_fixed_points = roundf(number * powf(2, _fractional));
}

int Fixed::getRawBits(void) const
{
	return (_fixed_points);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::operator=(Fixed const &fixed)
{
	_fixed_points = fixed.getRawBits();
	return (*this);
}

bool Fixed::operator<=(Fixed const &fixed) const
{
	return ((_fixed_points <= fixed._fixed_points));
}

bool Fixed::operator>=(Fixed const &fixed) const
{
	return ((_fixed_points >= fixed._fixed_points));
}

bool Fixed::operator<(Fixed const &fixed) const
{
	return ((_fixed_points < fixed._fixed_points));
}

bool Fixed::operator>(Fixed const &fixed) const
{
	return ((_fixed_points > fixed._fixed_points));
}

bool Fixed::operator!=(Fixed const &fixed) const
{
	return ((_fixed_points != fixed._fixed_points));
}

bool Fixed::operator==(Fixed const &fixed) const
{
	return ((_fixed_points == fixed._fixed_points));
}

Fixed Fixed::operator+(Fixed const &fixed) const
{
	Fixed res = Fixed(*this);
	res._fixed_points += fixed._fixed_points;
	return (res);
}

Fixed Fixed::operator-(Fixed const &fixed) const
{
	Fixed res = Fixed(*this);
	res._fixed_points -= fixed._fixed_points;
	return (res);
}

Fixed Fixed::operator*(Fixed const &fixed) const
{
	Fixed res = Fixed(*this);
	res._fixed_points = (_fixed_points * fixed._fixed_points) / 256;
	return (res);
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
	Fixed res = Fixed(*this);
	res._fixed_points /= fixed._fixed_points;
	return (res);
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);
	_fixed_points++;
	return (res);
}

Fixed &Fixed::operator++()
{
	_fixed_points++;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed const &Fixed::min(Fixed const &f1, const Fixed &f2)
{
	return f1._fixed_points > f2._fixed_points ? f2 : f1;
}

Fixed const &Fixed::max(Fixed const &f1, const Fixed &f2)
{
	return f1._fixed_points < f2._fixed_points ? f2 : f1;
}
