#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int f = rand() % 3;
	if (f == 0)
		return (new A);
	else if (f == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base& p) {
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &b)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &b)
	{
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception& b)
	{
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

int main()
{
	srand(time(NULL));
	Base *yo = generate();
	identify(*yo);
	delete yo;
	yo = generate();
	identify(yo);
	delete yo;
	yo = generate();
	identify(*yo);
	delete yo;
	yo = generate();
	identify(yo);
	delete yo;
}