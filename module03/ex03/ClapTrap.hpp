#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		getName() const;
	unsigned int	getHitpoint() const;
	unsigned int	getEnergy() const;
	unsigned int	getDamage() const;

protected:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

std::ostream& operator<< (std::ostream &out, const ClapTrap &clap);

#endif