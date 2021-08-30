#include "ClapTrap.hpp"

int	main()
{
	ClapTrap name("GREEN");

	std::cout << name << std::endl;
	name.attack("BLACK");
	name.takeDamage(20);
	name.beRepaired(10);

	return 0;
}