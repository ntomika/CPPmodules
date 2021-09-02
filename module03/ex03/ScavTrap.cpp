#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "name_scav";
	_hitpoints = 100;
	_energyPoints = 50;
	_energyPoints_Scav = 50;
	_attackDamage = 20;
	std::cout << "Default constructor ScavTrap call for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_energyPoints_Scav = 50;
	_attackDamage = 20;
	std::cout << "Constructor ScavTrap call for " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	this->operator=(scav);
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

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name
	<< " attack " << target << ", causing "
	<< _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

unsigned int ScavTrap::getScavEnergy()
{
	return this->_energyPoints_Scav;
}