#pragma once

#include <iostream>
#include <vector>
#include <exception>

class ValueNotFind: public std::exception
{
	public:
			virtual const char *what() const throw() {
				return "Value is not found";
			}
};

template <typename T>
void	easyfind(T &arr, int val)
{
	typename T::const_iterator it;
	it = arr.begin();
	while (it != arr.end())
	{
		if (*it == val)
		{
			std::cout << "was finded: " << *it << std::endl;
			return ;
		}
		++it;
	}
	throw ValueNotFind();
}