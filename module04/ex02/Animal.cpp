#include "Animal.hpp"

Animal::Animal(std::string name)
{
	this->_type = name;
	std::cout << "Animal {type " << _type << "} created" << std::endl;
}

Animal::Animal()
{
	this->_type = "animal";
	std::cout << "Animal {type " << _type << "} created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal {type " << _type << "} destroyed" << std::endl;
}

std::string		Animal::getType() const
{
	return this->_type;
}
