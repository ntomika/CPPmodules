#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "name_scav";
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default costructor ScavTrap call for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Costructor ScavTrap call for " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap call for " << _name << std::endl;
}

std::ostream& operator<< (std::ostream &out, const ScavTrap &scav)
{
	out << scav.getName() << std::endl
	<< scav.getHitpoint() << std::endl
	<< scav.getEnergy() << std::endl
	<< scav.getDamage();
	return out;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}