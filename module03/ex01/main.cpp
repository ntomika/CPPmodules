#include "ScavTrap.hpp"


int	main()
{
	ClapTrap name1("GREEN");

	std::cout << name1 << std::endl;
	name1.attack("BLACK");
	name1.takeDamage(10);
	name1.beRepaired(20);


	ScavTrap name2("BLACK");

	std::cout << name2 << std::endl;
	name2.attack("GREEN");
	name2.takeDamage(30);
	name2.beRepaired(40);
	name2.guardGate();

	return 0;
}