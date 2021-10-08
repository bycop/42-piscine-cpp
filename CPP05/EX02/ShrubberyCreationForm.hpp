#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>  

class ShrubberyCreationForm: public Form
{

public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &shrubberycreationform);

	virtual void	execute(Bureaucrat const &bureaucrat) const;
private:

};

#endif