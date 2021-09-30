#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int number);
	Fixed(const float number);
	Fixed &operator=(Fixed const &fixed);

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixed_points;
	static const int _fractional = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
