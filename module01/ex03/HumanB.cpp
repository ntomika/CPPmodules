#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}
HumanB::HumanB()
{
	this->_name = "default_name";
}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& type)
{
	this->_weapon = &type;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}