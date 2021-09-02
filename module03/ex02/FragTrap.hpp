#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &frag);
	~FragTrap();

	void	attack(std::string const & target);
	void	highFivesGuys(void);
};

std::ostream& operator<< (std::ostream &out, const FragTrap &frag);

#endif