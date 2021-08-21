#include "Fixed.hpp"

const int	Fixed::_numberOfFractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator= ( Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
