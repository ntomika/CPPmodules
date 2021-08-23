#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_numberOfFractionalBits;
public:
	Fixed();
	Fixed( const int val );
	Fixed( const float val );
	~Fixed();
	Fixed( const Fixed &fixed );

	Fixed & operator= ( const Fixed &f);

	bool operator> (const Fixed &f) const;
	bool operator>= (const Fixed &f) const;
	bool operator< (const Fixed &f) const;
	bool operator<= (const Fixed &f) const;

	Fixed & operator+ ( const Fixed &f );
	Fixed & operator- ( const Fixed &f );
	Fixed & operator* ( const Fixed &f );
	Fixed & operator/ ( const Fixed &f );

	Fixed & operator++ ( void );
	Fixed & operator-- ( void );
	Fixed operator++(int);
	Fixed operator--(int);
	
	int			getRawBits( void ) const;
	void		setRawBits( const int raw );

	float		toFloat( void ) const;
	int			toInt( void ) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);
#endif