#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_numberOfFractionalBits;
public:
	Fixed();
	~Fixed();
	Fixed( Fixed const &fixed );
	Fixed &operator= ( Fixed const &fixed);
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
};

#endif