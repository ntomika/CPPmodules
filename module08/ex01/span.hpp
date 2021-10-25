#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
private:
	unsigned int		_N;
	std::vector<int>	_arr;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &src);
	virtual ~Span();

	Span & operator=(const Span &src);

	void	addNumber(int nbr);

	template <class T>
	void	addNumber(T begin, T end);
	
	int		shortestSpan(void);
	int		longestSpan(void);


	class AddNumberError: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Array is full";
			}
	};

	class LenError: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Array is too short";
			}
	};
};

template <class T>
void	Span::addNumber(T begin, T end)
{
	for (; begin != end; ++begin)
	{
		this->addNumber(*begin);
	}
}