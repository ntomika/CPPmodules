#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "default name";
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name
	<< " ready to attack." << std::endl
	<< "\t*** Starting data: ***"<< std::endl
	<<" \t -> hitpoints: " << _hitpoints << std::endl
	<< "\t -> energy points: " << _energyPoints << std::endl
	<< "\t -> attack damage: " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name
	<< " ready to attack." << std::endl
	<< "\t*** Starting data: ***"<< std::endl
	<<" \t -> hitpoints: " << _hitpoints << std::endl
	<< "\t -> energy points: " << _energyPoints << std::endl
	<< "\t -> attack damage: " << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Opponents destroyed!" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name
	<< " attack " << target << ", causing "
	<< _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "increased damage by " << amount << std::endl;
	_attackDamage += amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "restoration of health on " << amount << std::endl;
	_energyPoints += amount;
}
