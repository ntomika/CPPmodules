#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();
	void	highFivesGuys(void);
	void	whoAmI();

	std::string		getName() const;
	unsigned int	getHitpoint() const;
	unsigned int	getEnergy() const;
	unsigned int	getDamage() const;
};

std::ostream& operator<< (std::ostream &out, const DiamondTrap &daimond);

#endif