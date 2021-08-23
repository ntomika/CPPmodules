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

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ----------------------------------------*/
/* -> Перегрузка оператора присваивания <- */
/* --------------------------------------- */

Fixed & Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = fixed.getRawBits();
	return (*this);
}

/* ------------------- */
/* -> Методы класса <- */
/* ------------------- */

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedPointValue = raw;
}
