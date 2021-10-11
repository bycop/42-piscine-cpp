#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T const array[], unsigned int len, void (*function)(T const &elem))
{
	for (unsigned int i = 0; i < len; i++)
		function(array[i]);
}

#endif