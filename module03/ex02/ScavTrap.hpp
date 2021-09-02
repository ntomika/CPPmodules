#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scav);
	~ScavTrap();

	void	attack(std::string const & target);
	void	guardGate();
};

std::ostream& operator<< (std::ostream &out, const ScavTrap &scav);

#endif