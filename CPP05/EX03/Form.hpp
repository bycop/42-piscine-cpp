#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(std::string _name, int execGrade, int signGrade);
	Form(Form const &form);
	Form &operator=(Form const &form);
	~Form();

	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	bool getSignedState() const;
	int getExecGrade() const;
	int getSignGrade() const;
	std::string getName() const;


protected:
	const std::string _name;
	bool _isSigned;
	int _execGrade;
	int _signGrade;
	std::string _target;

};

#endif