#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string name)
{
	this->_type = name;
	std::cout << "WrongAnimal {type " << _type << "} created" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	this->_type = "wrong_animal";
	std::cout << "WrongAnimal {type " << _type << "} created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_a)
{
	this->operator=(wrong_a);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal say '43534'" << std::endl;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal &wrong_a)
{
	this->_type = wrong_a._type;
	return (*this);
}