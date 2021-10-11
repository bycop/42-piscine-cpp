#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template <typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

#endif