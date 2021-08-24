#include "Fixed.hpp"

const int	Fixed::_numberOfFractionalBits = 8;

/* -------------------------------------------------------------------- */
/* -> Конструкторы по-умолчани., контруктор копирования и деструктор <- */
/* -------------------------------------------------------------------- */

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(a * (1 << _numberOfFractionalBits));
}

Fixed::Fixed(const float b)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf((b * (1 << _numberOfFractionalBits))));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ----------------------------*/
/* -> Перегрузка операторов <- */
/* --------------------------- */

Fixed & Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

/* ------------------- */
/* -> Методы класса <- */
/* ------------------- */

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (((float)getRawBits()) / ((float)(1 << _numberOfFractionalBits)));
}

int	Fixed::toInt(void) const
{
	return ((getRawBits()) / ((1 << _numberOfFractionalBits)));
}
