#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}
HumanA::HumanA()
{
	this->_name = "default_name";
}
HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}