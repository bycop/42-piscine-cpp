#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int number);
	Fixed(const float number);
	Fixed &operator=(Fixed const &fixed);

	bool operator<=(Fixed const &fixed) const;
	bool operator>=(Fixed const &fixed) const;
	bool operator<(Fixed const &fixed) const;
	bool operator>(Fixed const &fixed) const;
	bool operator==(Fixed const &fixed) const;
	bool operator!=(Fixed const &fixed) const;

	Fixed operator+(Fixed const &fixed) const;
	Fixed operator-(Fixed const &fixed) const;
	Fixed operator*(Fixed const &fixed) const;
	Fixed operator/(Fixed const &fixed) const;

	Fixed operator++(int);
	Fixed &operator++();

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	static Fixed const &min(Fixed const &fix1, const Fixed &fix2);
	static Fixed const &max(Fixed const &fix1, const Fixed &fix2);

private:
	int _fixed_points;
	static const int _fractional = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
