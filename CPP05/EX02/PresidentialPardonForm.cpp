#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform) : Form(presidentialpardonform._name, 5, 25)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &presidentialpardonform)
{
	this->_execGrade = presidentialpardonform._execGrade;
	this->_signGrade = presidentialpardonform._signGrade;
	this->_isSigned = presidentialpardonform._isSigned;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
