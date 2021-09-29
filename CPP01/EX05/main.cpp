#include "Karen.hpp"

int	main(void)
{
	Karen karen = Karen();
	karen.complain("ERROR");
	std::cout << "--------------------------" << std::endl;
	karen.complain("WARNING");
	std::cout << "--------------------------" << std::endl;
	karen.complain("INFO");
	std::cout << "--------------------------" << std::endl;
	karen.complain("DEBUG");
	std::cout << "--------------------------" << std::endl;
	karen.complain("bad");
}