#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
public:
	Span(unsigned int N);
	Span(Span const &span);
	Span &operator=(Span const &span);
	~Span();
	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

	class NotEnoughElementException : public std::exception
	{
		const char * what() const throw()
		{
			return ("Vector empty or contain only one element");
		}
	} NotEnough;
	class FullException : public std::exception
	{
		const char * what() const throw()
		{
			return ("Vector full");
		}
	} Full;

private:
	unsigned int _N;
	std::vector<int> _vec;
};

#endif
