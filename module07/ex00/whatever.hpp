#pragma once

#include <iostream>

template <typename T1>
void swap(T1 a, T1 b)
{
	T1 c = a;
	T1 d = b;

	std::cout << "before:	" << a << ", " << b << std::endl;
	a = d;
	b = c;
	std::cout << "after:	" << a << ", " << b << std::endl;
}

template <typename T2>
T2 min(T2 a, T2 b)
{
	std::cout << "values:	" << a << ", " << b << std::endl;
	return (a < b) ? a : b;
}

template <typename T3>
T3 max(T3 a, T3 b)
{
	std::cout << "values:	" << a << ", " << b << std::endl;
	return (a > b) ? a : b;
}


// class Awesome {
// private:
// 	int _n;
// public: 
// 	Awesome(void) :_n(0) {}
// 	Awesome( int n ) : _n(n) {}
// 	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
// 	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
// 	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 	int get_n() const { return _n; }
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }
