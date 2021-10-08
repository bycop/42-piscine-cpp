#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat joe = Bureaucrat("Joe", 5);
	PresidentialPardonForm p_form("trump");
	RobotomyRequestForm r_form("Mike");
	ShrubberyCreationForm s_form("tree");
	try 
	{
	p_form.execute(joe);
	r_form.execute(joe);
	s_form.execute(joe);
	joe.decrementGrade();
	joe.executeForm(p_form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}