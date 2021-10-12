#include "Span.hpp"
#include <limits>
Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(Span const &span)
{
	(void)span;
}

Span &Span::operator=(Span const &span)
{
	(void)span;
	return (*this);
}

Span::~Span()
{
	
}

void	Span::addNumber(int number)
{
	if (_vec.size() >= _N)
		throw Span::Full;
	_vec.push_back(number);
}

int		Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw Span::NotEnough;

	int save = INT_MAX;
	for (unsigned int i = 0; i < _vec.size(); i++)
		for (unsigned int j = i + 1; j < _vec.size(); j++)
		{
			if (_vec[i] > _vec[j] && _vec[i] - _vec[j] < save)
				save = _vec[i] - _vec[j];
			else if (_vec[j] >= _vec[i] && _vec[j] - _vec[i] < save)
				save = _vec[j] - _vec[i];
		}

	return save;
}

int		Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw Span::NotEnough;

	int save = 0;
	for (unsigned int i = 0; i < _vec.size(); i++)
		for (unsigned int j = i + 1; j < _vec.size(); j++)
		{
			if (_vec[i] > _vec[j] && _vec[i] - _vec[j] > save)
				save = _vec[i] - _vec[j];
			else if (_vec[j] >= _vec[i] && _vec[j] - _vec[i] > save)
				save = _vec[j] - _vec[i];
		}

	return save;
}
