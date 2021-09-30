#include "Fixed.hpp"

int main(void)
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "-----------------\n" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl << "-----------------\n" << std::endl;
	std::cout << (a > b == 0 ? "b > a" : "a > b") << std::endl;
	std::cout << (a < b == 0 ? "b < a" : "a < b") << std::endl;
	std::cout << (a >= b == 0 ? "b >= a" : "a >= b") << std::endl;
	std::cout << (a <= b == 0 ? "b <= a" : "a <= b") << std::endl;
	std::cout << (a == b == 0 ? "b != a" : "a == b") << std::endl;
	std::cout << (a != b == 0 ? "b == a" : "a != b") << std::endl;

	std::cout << std::endl << "-----------------\n" << std::endl;
	
	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (b / a) << std::endl;
	std::cout << std::endl << "-----------------" << std::endl;

	return 0;
}