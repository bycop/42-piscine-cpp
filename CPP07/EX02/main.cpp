#include <iostream>
#include "Array.hpp"

int main()
{

	try
	{
		Array<unsigned int> empty;
		std::cout << empty.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Array<std::string> test(5);
		for (unsigned int i = 0; i < test.size(); i++)
			test[i] = "Elem" + std::to_string(i + 1);
		std::cout << test.size() << std::endl;
		for (unsigned int i = 0; i < test.size(); i++)
			std::cout << test[i] << std::endl;
		test[test.size()];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}