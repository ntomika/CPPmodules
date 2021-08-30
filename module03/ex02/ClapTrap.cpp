#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "name_clap";
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default costructor ClapTrap call for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Costructor ClapTrap call for " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap call for " << _name << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name
	<< " attack " << target << ", causing "
	<< _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "changing the parameter [attack damage] to value " 
	<< amount << std::endl;
	if (_attackDamage <= amount)
	{
		std::cout << "death" << std::endl;
		return ;
	}
	_attackDamage -= amount;
	std::cout << "now [attack damage] -> " << _attackDamage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "changing the parameter [energy points] to value "
	<< amount << std::endl;
	_energyPoints += amount;
	std::cout << "now [energy points] -> " << _energyPoints << std::endl;
}

std::ostream& operator<< (std::ostream &out, const ClapTrap &clap)
{
	out << clap.getName() << std::endl
	<< clap.getHitpoint() << std::endl
	<< clap.getEnergy() << std::endl
	<< clap.getDamage();
	return out;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

unsigned int	ClapTrap::getHitpoint() const
{
	std::cout << " \t -> [hitpoints]: ";
	return this->_hitpoints;
}

unsigned int	ClapTrap::getEnergy() const
{
	std::cout << "\t -> [energy points]: ";
	return this->_energyPoints;
}

unsigned int	ClapTrap::getDamage() const
{
	std::cout << "\t -> [attack damage]: ";
	return this->_attackDamage;
}