#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "name_diamond";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default costructor DiamondTrap call for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Costructor DiamondTrap call for " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap call for " << _name << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "changing the parameter [attack damage] to value "
	<< amount << std::endl;
	_attackDamage += amount;
	std::cout << "now [attack damage] -> " << _attackDamage << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "changing the parameter [energy points] to value "
	<< amount << std::endl;
	_energyPoints += amount;
	std::cout << "now [energy points] -> " << _energyPoints << std::endl;
}

void	DiamondTrap::guardGate()
{
	ScavTrap::guardGate();
}

void	DiamondTrap::highFivesGuys(void)
{
	FragTrap::highFivesGuys();
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name
	<< ", and ClapTrap name is " << ClapTrap::_name
	<< std::endl;
}

std::string DiamondTrap::getName() const
{
	return this->_name;
}

unsigned int	DiamondTrap::getHitpoint() const
{
	std::cout << " \t -> [hitpoints]: ";
	return this->_hitpoints;
}

unsigned int	DiamondTrap::getEnergy() const
{
	std::cout << "\t -> [energy points]: ";
	return this->_energyPoints;
}

unsigned int	DiamondTrap::getDamage() const
{
	std::cout << "\t -> [attack damage]: ";
	return this->_attackDamage;
}

std::ostream& operator<< (std::ostream &out, const DiamondTrap &diamond)
{
	out << diamond.getName() << std::endl
	<< diamond.getHitpoint() << std::endl
	<< diamond.getEnergy() << std::endl
	<< diamond.getDamage();
	return out;
}
