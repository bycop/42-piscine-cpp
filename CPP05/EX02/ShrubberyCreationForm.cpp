#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 137, 145)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform) : Form(shrubberycreationform._name, 5, 25)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubberycreationform)
{
	this->_execGrade = shrubberycreationform._execGrade;
	this->_signGrade = shrubberycreationform._signGrade;
	this->_isSigned = shrubberycreationform._isSigned;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream outfile (_target + "_shrubbery");
		outfile << "     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\\\////\n         |||/\\ \n         |||\\/\n         |||||\n   .....//||||\\...." << std::endl;
		outfile.close();
	}
}
