#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
class Form;

class Bureaucrat
{
public:
	Bureaucrat(std::string _name, int grade);
	Bureaucrat(Bureaucrat const &bureaucrat);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);

	std::string getName() const;
	int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form &form);

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

private:
	const std::string _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif