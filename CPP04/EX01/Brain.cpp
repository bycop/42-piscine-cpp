#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &brain)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	return (*this);
}

void Brain::setIdea(int i, const std::string &content)
{
	_ideas[i] = content;
}

std::string Brain::getIdea(int i)
{
	return (_ideas[i]);
}

void Brain::displayIdeas()
{
	for (int i = 0; i < 100; i++)
		if (_ideas[i] != "")
			std::cout << std::to_string(i) + ": " + _ideas[i] << std::endl;
}