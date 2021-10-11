#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
	Array()
	{
		_array = NULL;
		_len = 0;
	}

	Array &operator=(const Array &array)
	{
		if (&array == this)
			return (this);
		return *new (this) Array(array);
	}

	Array(const Array &array)
	{
		if (&array != this)
			for (unsigned int i = 0; i < array.size(); i++)
				_array[i] = array[i];
	}

	Array(unsigned int n)
	{
		_len = n;
		_array = new T[n];
	}

	unsigned int size() const
	{
		return (_len);
	}

	T &operator[](unsigned int n)
	{
		if (n >= _len)
			throw IndexErr;
		return (_array[n]);
	}

	class IndexErrorException : public std::exception
	{
		const char *what() const throw()
		{
			return ("Incorrect index");
		}
	} IndexErr;

private:
	T *_array;
	unsigned int _len;
};

#endif