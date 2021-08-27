#include "ClapTrap.hpp"

int	main()
{
	ClapTrap name("GREEN");

	name.attack("BLACK");
	name.takeDamage(20);
	name.beRepaired(10);
	name.attack("BLACK once again");

	return 0;
}