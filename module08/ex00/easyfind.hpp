#pragma once

#include <iostream>
#include <vector>
#include <set>
#include <exception>

class ValueNotFind: public std::exception
{
	public:
			virtual const char *what() const throw() {
				return "Value is not found";
			}
};

template <typename T>
typename T::iterator	easyfind(T &arr, int val)
{
	typename T::iterator it;

	it = arr.begin();
	while (it != arr.end())
	{
		if (*it == val)
			return it;
		++it;
	}
	throw ValueNotFind();
}