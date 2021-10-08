#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &presidentialpardonform);

	virtual void	execute(Bureaucrat const &bureaucrat) const;
private:

};

#endif