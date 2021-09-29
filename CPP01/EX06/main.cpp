#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen = Karen();

	if (ac != 2)
		karen.complain("");
	else
		karen.complain((std::string)av[1]);
	return (EXIT_SUCCESS);
}