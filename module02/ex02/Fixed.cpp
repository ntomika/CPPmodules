#include "Fixed.hpp"

const int	Fixed::_numberOfFractionalBits = 8;

/* -------------------------------------------------------------------- */
/* -> Конструкторы по-умолчани., контруктор копирования и деструктор <- */
/* -------------------------------------------------------------------- */

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed::Fixed(const int val)
{
	setRawBits(val * (1 << _numberOfFractionalBits));
}

Fixed::Fixed(const float val)
{
	setRawBits(roundf((val * (1 << _numberOfFractionalBits))));
}

Fixed::Fixed(const Fixed &fixed)
{
	this->operator=(fixed);
}

Fixed::~Fixed() {}

/* ----------------------------*/
/* -> Перегрузка операторов <- */
/* --------------------------- */

Fixed & Fixed::operator= (const Fixed &f)
{
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

bool	Fixed::operator== (const Fixed &f) const
{
	return (this->toFloat() == f.toFloat());
}

bool	Fixed::operator!= (const Fixed &f) const
{
	return (this->toFloat() != f.toFloat());
}

/* ------------------------------------------------------*/
/* -> Перегрузка операторов инкрементов и декрементов <- */
/* ----------------------------------------------------- */

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

Fixed & Fixed::max ( Fixed &val_1, Fixed &val_2 )
{
	if (val_1 > val_2)
		return val_1;
	return (val_2);
}

Fixed & Fixed::min ( Fixed &val_1, Fixed &val_2 )
{
	if (val_1 < val_2)
		return val_1;
	return (val_2);
}

const Fixed & Fixed::max (const Fixed &val_1, const Fixed &val_2 )
{
	if (val_1 > val_2)
		return val_1;
	return (val_2);
}

const Fixed & Fixed::min (const Fixed &val_1,const Fixed &val_2 )
{
	if (val_1 < val_2)
		return val_1;
	return (val_2);
}

float	Fixed::toFloat(void) const
{
	return (((float)getRawBits()) / ((float)(1 << _numberOfFractionalBits)));
}

int	Fixed::toInt(void) const
{
	return ((getRawBits()) / ((1 << _numberOfFractionalBits)));
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedPointValue = raw;
}
