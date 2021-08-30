#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "name_frag";
	this->_hitpoints = 100;
	this->_hitpoints_Frag = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_attackDamage_Frag = 30;
	std::cout << "Default constructor FragTrap call for " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_hitpoints_Frag = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_attackDamage_Frag = 30;
	std::cout << "Costructor FragTrap call for " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap call for " << _name << std::endl;
}

std::ostream& operator<< (std::ostream &out, const FragTrap &frag)
{
	out << frag.getName() << std::endl
	<< frag.getHitpoint() << std::endl
	<< frag.getEnergy() << std::endl
	<< frag.getDamage();
	return out;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << _name
	<< " attack " << target << ", causing "
	<< _attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Positive high fives request" << std::endl;
}

unsigned int	FragTrap::getFragHitpoint()
{
	return this->_hitpoints_Frag;
}

unsigned int	FragTrap::getFragDamage()
{
	return this->_attackDamage_Frag;
}
