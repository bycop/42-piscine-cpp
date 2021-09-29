#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strPTR = &str;

	std::string &strREF = str;

	std::cout << "str adress: " << &str << std::endl;
	std::cout << "strPTR adress: " << strPTR << std::endl;
	std::cout << "strREF adress: " << &strREF << std::endl;

	std::cout << "str: " << str << std::endl;
	std::cout << "strPTR: " << *strPTR << std::endl;
	std::cout << "strREF: " << strREF << std::endl;

}