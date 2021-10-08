#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 45, 75)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform) : Form(robotomyrequestform._name, 45, 75)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyrequestform)
{
	this->_execGrade = robotomyrequestform._execGrade;
	this->_signGrade = robotomyrequestform._signGrade;
	this->_isSigned = robotomyrequestform._isSigned;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
	else
	{
  	srand(time(NULL));
	int random = rand() % 2;
	if (random % 2)
		std::cout << "'Perceuseeeee', " << _target << " has bien robotomized" << std::endl;
	else
		std::cout << "Failed to robotomize " << _target << "." << std::endl;
	}
}
