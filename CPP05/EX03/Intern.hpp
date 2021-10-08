#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &intern);
		~Intern();
		Intern &operator=(const Intern &intern);
		Form *makeForm(std::string name, std::string target);
};

std::ostream &operator<<(std::ostream &o, Intern const &intern);

#endif