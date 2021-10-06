#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{

public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	Brain &operator=(Brain const &brain);
	void setIdea(int i, const std::string &content);
	std::string getIdea(int i);
	void		displayIdeas();

private:
	std::string _ideas[100];
};

#endif