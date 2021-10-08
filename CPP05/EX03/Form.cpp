#include "Form.hpp"

Form::Form(std::string name, int execGrade, int signGrade)	: _name(name)
{
	_execGrade = execGrade;
	_signGrade = signGrade;
	_isSigned = false;
}

Form::Form(Form const &form)
{
	*this = form;
}

Form &Form::operator=(Form const &form)
{
	this->_execGrade = form._execGrade;
	this->_signGrade = form._signGrade;
	this->_isSigned = form._isSigned;
	return (*this);
}

Form::~Form()
{
	
}

bool Form::getSignedState() const
{
	return (_isSigned);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

std::string Form::getName() const
{
	return (_name);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else
		_isSigned = !_isSigned;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("FORM: Grade too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("FORM: Grade too Low");
}