#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	this->_grade = bureaucrat._grade;
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (_grade);	
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot sign because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " excutes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot sign because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
    o << i.getName() << ", bureaucrat grade " << i.getGrade();
    return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BUREAUCRAT: Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BUREAUCRAT: Grade too Low");
}