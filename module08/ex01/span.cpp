#include "span.hpp"

/* -----------------------------
|	Констуркторы и деструктор	|
-------------------------------- */

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N), _arr() {}

Span::~Span() {}


Span::Span(const Span &src)
{
	this->operator=(src);
}

/* -------------------------------------
|	Перегрузка оператора присваивания	|
---------------------------------------- */

Span & Span::operator=(Span const & src)
{
	this->_N = src._N;
	this->_arr = src._arr;
	return *this;
}

/* -----------------
|	Методы класса	|
-------------------- */

void	Span::addNumber(int nbr)
{
	if (_arr.size() < _N)
		_arr.push_back(nbr);
	else
		throw Span::AddNumberError();
}

int		Span::shortestSpan()
{
	if (_arr.size() <= 1)
		throw Span::LenError();
	int shortest = std::abs(_arr[1] - _arr[0]);
	for (unsigned int i = 0; i < _N; ++i)
	{
		for (unsigned int j = i + 1; j < _N; ++j)
		{
			if (std::abs(_arr[j] - _arr[i]) < shortest)
				shortest = std::abs(_arr[j] - _arr[i]);
		}
	}
	return shortest;
}

int	Span::longestSpan()
{
	if (_arr.size() <= 1)
		throw Span::LenError();
	int min = *min_element(_arr.begin(), _arr.end());
	int max = *max_element(_arr.begin(), _arr.end());
	return (max - min);
}