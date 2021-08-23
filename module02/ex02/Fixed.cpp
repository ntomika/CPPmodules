#include "Fixed.hpp"

const int	Fixed::_numberOfFractionalBits = 8;

/* -------------------------------------------------------------------- */
/* -> Конструкторы по-умолчани., контруктор копирования и деструктор <- */
/* -------------------------------------------------------------------- */

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int val)
{
	// std::cout << "Int constructor called" << std::endl;
	setRawBits(val * (1 << _numberOfFractionalBits));
}

Fixed::Fixed(const float val)
{
	// std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf((val * (1 << _numberOfFractionalBits))));
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/* ----------------------------*/
/* -> Перегрузка операторов <- */
/* --------------------------- */

Fixed & Fixed::operator= (const Fixed &f)
{
	// std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = f.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

/* -------------------------------------------*/
/* -> Перегрузка арифметических операторов <- */
/* ------------------------------------------ */

Fixed	& Fixed::operator+(const Fixed &f)
{
	this->_fixedPointValue = (this->toFloat() + f.toFloat()) * (1 << _numberOfFractionalBits);
	return *this;
}

Fixed	& Fixed::operator-(const Fixed &f)
{
	this->_fixedPointValue = (this->toFloat() - f.toFloat()) * (1 << _numberOfFractionalBits);
	return *this;
}

Fixed	& Fixed::operator*(const Fixed &f)
{
	this->_fixedPointValue = (this->toFloat() * f.toFloat()) * (1 << _numberOfFractionalBits);
	return *this;
}

Fixed	& Fixed::operator/(const Fixed &f)
{
	this->_fixedPointValue = (this->toFloat() / f.toFloat()) * (1 << _numberOfFractionalBits);
	return *this;
}

/* --------------------------------------*/
/* -> Перегрузка операторов сравнения <- */
/* ------------------------------------- */

bool	Fixed::operator> (const Fixed &f) const
{
	return (this->toFloat() > f.toFloat());
}

bool	Fixed::operator>= (const Fixed &f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool	Fixed::operator< (const Fixed &f) const
{
	return (this->toFloat() < f.toFloat());
}

bool	Fixed::operator<= (const Fixed &f) const
{
	return (this->toFloat() <= f.toFloat());
}

/* ----------------------------------------------------*/
/* -> Перегрузка операторов инкремента и декремента <- */
/* --------------------------------------------------- */

Fixed	& Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return *this;
}

Fixed	& Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++(this->_fixedPointValue);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	--this->_fixedPointValue;
	return (tmp);
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
