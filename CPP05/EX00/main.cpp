#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat joe = Bureaucrat("Joe", 2);
	std::cout << joe.getGrade() << std::endl;
	std::cout << joe.getName() << std::endl;
	joe.incrementGrade();
	try {
		joe.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << joe.getGrade() << std::endl;
	std::cout << joe.getName() << std::endl;
	joe.decrementGrade();
	std::cout << joe.getGrade() << std::endl;
	std::cout << joe.getName() << std::endl;

	std::cout << joe << std::endl;

}