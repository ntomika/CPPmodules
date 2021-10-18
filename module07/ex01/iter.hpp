#pragma once

#include <iostream>

template <typename T1>
void	iter(T1 *arr, int l, void f(const T1 &))
{
	for (int i = 0; i < l; i++)
	{
		f(arr[i]);
	}
}

template <typename T2>
void	printArr(T2& arr)
{
	std::cout << "[ " << arr << " ]";
}


// class Awesome {
// public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template <typename T> void
// print( T const & x ) { 
// 	std::cout << x << std::endl; 
// 	return; 
// }