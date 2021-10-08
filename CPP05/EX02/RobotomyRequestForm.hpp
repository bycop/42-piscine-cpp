#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &robotomyrequestform);

	virtual void	execute(Bureaucrat const &bureaucrat) const;
private:

};

#endif