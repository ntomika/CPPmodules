#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clap);
	~ClapTrap();

	ClapTrap &operator= (const ClapTrap &clap);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		getName() const;
	unsigned int	getHitpoint() const;
	unsigned int	getEnergy() const;
	unsigned int	getDamage() const;
};

std::ostream& operator<< (std::ostream &out, const ClapTrap &clap);

#endif