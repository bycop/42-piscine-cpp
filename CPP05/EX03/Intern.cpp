#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Intern const &intern)
{
	(void)intern;
	o << "Intern ready to help !" << std::endl;
	return o;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *tmp;
	ShrubberyCreationForm *s_form = new ShrubberyCreationForm(target);
	RobotomyRequestForm *r_form = new RobotomyRequestForm(target);
	PresidentialPardonForm *p_form = new PresidentialPardonForm(target);
	Form *forms[3] = {s_form, r_form, p_form};
	tmp = forms[0];
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i]->getName())
		{
			tmp = forms[i];
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return (tmp);
		}
	}
	std::cout << "Unknown Form." << std::endl;
	return (nullptr);
}