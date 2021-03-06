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
	Fixed( const Fixed &fixed );
	Fixed &operator= ( const Fixed &fixed);
	int			getRawBits( void ) const;
	void		setRawBits( const int raw );
};

#endif