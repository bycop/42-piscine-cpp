#include "Iter.hpp"

#include <iostream>

template <typename T>
void	print(T const &content)
{
	std::cout << content << std::endl;
}

int main(void)
{
	std::string strings[3] = {
		"1111",
		"2222",
		"3333"
	};
	int nbs[5] = {1, 2, 3, 4, 5};
	iter(strings, 3, &print);
	iter(nbs, 5, &print);
	return 0;
}