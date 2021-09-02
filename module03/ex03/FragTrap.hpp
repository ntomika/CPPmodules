#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &frag);
	~FragTrap();

	void	attack(std::string const & target);
	void	highFivesGuys(void);

	unsigned int	getFragHitpoint();
	unsigned int	getFragDamage();
private:
	unsigned int	_hitpoints_Frag;
	unsigned int	_attackDamage_Frag;
};

std::ostream& operator<< (std::ostream &out, const FragTrap &frag);

#endif