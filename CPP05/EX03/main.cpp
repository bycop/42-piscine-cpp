#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{

	Intern someRandomIntern;
	Form *rrf;
	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	// Bureaucrat joe("joe", 150);
	Bureaucrat joe("joe", 17);
	try
	{
		joe.signForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}