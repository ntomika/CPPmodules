#pragma once

#include <iostream>
#include <stack>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T> () {}
	MutantStack(const MutantStack<T> &src) : std::stack<T> (src) {}
	virtual ~MutantStack() {};

	MutantStack & operator=(const MutantStack<T> &src)
	{
		this->c.operator=(src);
		return (*this);
	}

	typedef typename Container::iterator iterator;
	typename MutantStack<T>::iterator begin()
	{
		return (this->c.begin());
	}
	typename MutantStack<T>::iterator end()
	{
		return (this->c.end());
	}

	typedef typename Container::reverse_iterator reverse_iterator;
	typename MutantStack<T>::reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	typename MutantStack<T>::reverse_iterator rend()
	{
		return (this->c.rend());
	}
};