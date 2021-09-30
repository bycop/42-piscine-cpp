#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator=(Fixed const &fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int	_fixed_points;
	static const int _fractional = 8;

};

#endif
