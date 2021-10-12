#include "easyfind.hpp"
#include <algorithm>

int main()
{
	std::list<int> list;
	list.push_back(5);
	list.push_back(10);
	// list.push_back(12);
	list.push_back(15);
	list.push_back(20);

	try
	{
        std::cout << easyfind(list, 15) << std::endl;
        std::cout << easyfind(list, 12) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

}
