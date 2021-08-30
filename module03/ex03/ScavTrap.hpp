#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	void			attack(std::string const & target);
	void			guardGate();

	unsigned int	getScavEnergy();
private:
	unsigned int	_energyPoints_Scav;
};


std::ostream& operator<< (std::ostream &out, const ScavTrap &scav);

#endif