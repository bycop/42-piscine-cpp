#include "Span.hpp"

int	main()
{
	Span yo(5);
	
	try
	{
		yo.addNumber(5);
		// std::cout << yo.shortestSpan() << std::endl;
		yo.addNumber(3);
		yo.addNumber(17);
		yo.addNumber(9);
		yo.addNumber(11);
		std::cout << yo.shortestSpan() << std::endl;
		std::cout << yo.longestSpan() << std::endl;
		// yo.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
