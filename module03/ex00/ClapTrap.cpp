#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "default name";
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default costructor ClapTrap call for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Constructor ClapTrap call for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	this->operator=(clap);
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
	std::cout << "changing the parameter [energy points] to value " << amount << std::endl;
	_energyPoints += amount;
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

ClapTrap & ClapTrap::operator= (const ClapTrap &clap)
{
	this->_attackDamage = clap.getDamage();
	this->_energyPoints = clap.getEnergy();
	this->_hitpoints = clap.getHitpoint();
	return (*this);
}
