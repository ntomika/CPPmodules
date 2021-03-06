#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("wrong_cat")
{
	this->_type = "wrong_cat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_c)
{
	this->operator=(wrong_c);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat say 'weom'" << std::endl;
}