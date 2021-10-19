#pragma once

# include <iostream>
# include <exception>

template <typename T>
class Array
{
private:
	unsigned int	_l;
	T				*_arr;
public:
	Array()
	{
		_l = 0;
		_arr = NULL; 
	}

	Array(unsigned int n)
	{
		_l = n;
		_arr = new T[_l];
	}

	Array(const Array &src)
	{
		_l = src.getLen();
		_arr = new T[_l];
		for (unsigned int i = 0; i < _l; i++)
		{
			_arr[i] = src.getArr()[i];
		}
	}
	virtual ~Array()
	{
		if (_arr) 
		delete [] _arr;
	}

	Array & operator=(const Array &src)
	{
		_l = src.getLen();
		if (_arr)
			delete[] _arr;
		_arr = new T[_l];
		for (unsigned int i = 0; i < _l; i++)
		{
			_arr[i] = src.getArr()[i];
		}
		return *this;
	}

	T & operator[](unsigned int n)
	{
		if (n >= _l || n < 0)
			throw OutOfTheLimits();
		return (_arr[n]);
	}

	unsigned int	size() { return _l; };

	unsigned int	getLen() const { return this->_l; }
	T				*getArr() const { return this->_arr; }

	class OutOfTheLimits: public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Out of the limits"; }
	};
};