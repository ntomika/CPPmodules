#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "default_type";
}
Weapon::Weapon(std::string type)
{
	this->setType(type);
}
Weapon::~Weapon() {}

const std::string&	Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}