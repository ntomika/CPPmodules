#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
}

#endif