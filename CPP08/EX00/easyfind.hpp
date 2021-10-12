#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>

template <typename T>
int easyfind(T &list, int target)
{
	typename T::iterator i = std::find(list.begin(), list.end(), target);;

	if (i == list.end())
		throw std::exception();	
	
	return (*i);
}

#endif
