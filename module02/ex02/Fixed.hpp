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

	bool operator> ( const Fixed &f ) const;
	bool operator>= ( const Fixed &f ) const;
	bool operator< ( const Fixed &f ) const;
	bool operator<= ( const Fixed &f ) const;
	bool operator== ( const Fixed &f ) const;
	bool operator!= ( const Fixed &f ) const;

	Fixed & operator+ ( const Fixed &f );
	Fixed & operator- ( const Fixed &f );
	Fixed & operator* ( const Fixed &f );
	Fixed & operator/ ( const Fixed &f );

	Fixed & operator++ ( void );
	Fixed & operator-- ( void );
	Fixed operator++( int );
	Fixed operator--( int );

	static Fixed&		max ( Fixed &val_1, Fixed &val_2 );
	static Fixed&		min ( Fixed &val_1, Fixed &val_2 );
	static const Fixed&		min ( const Fixed &val_1, const Fixed &val_2 );
	static const Fixed&		max ( const Fixed &val_1, const Fixed &val_2 );
	
	float		toFloat( void ) const;
	int			toInt( void ) const;

	int			getRawBits( void ) const;
	void		setRawBits( const int raw );
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif