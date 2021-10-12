#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack()
	{
	}
	MutantStack(MutantStack const &mutantstack)
	{
		*this = mutantstack;
	}
	~MutantStack()
	{
	}
	MutantStack &operator=(MutantStack const &mutantstack)
	{
		std::stack<T>::operator=(mutantstack);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin(void)
	{
		return std::stack<T>::c.begin();
	}
	iterator end(void)
	{
		return std::stack<T>::c.end();
	}

	reverse_iterator rbegin(void)
	{
		return std::stack<T>::c.rbegin();
	}
	reverse_iterator rend(void)
	{
		return std::stack<T>::c.rend();
	}
};

#endif
