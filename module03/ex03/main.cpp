#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap name1("GREEN");

	std::cout << name1 << std::endl;
	name1.attack("ZONE1");
	name1.takeDamage(10);
	name1.beRepaired(20);
	std::cout << std::endl << std::endl;


	ScavTrap name2("BLACK");

	std::cout << name2 << std::endl;
	name2.attack("ZONE2");
	name2.takeDamage(30);
	name2.beRepaired(40);
	name2.guardGate();
	std::cout << std::endl << std::endl;


	FragTrap name3("BLUE");

	std::cout << name3 << std::endl;
	name3.attack("ZONE3");
	name3.takeDamage(50);
	name3.beRepaired(60);
	name3.highFivesGuys();
	std::cout << std::endl << std::endl;
	

	DiamondTrap name4("RED");

	std::cout << name4 << std::endl;
	name4.attack("ZONE4");
	name4.takeDamage(70);
	name4.beRepaired(80);
	name4.guardGate();
	name4.highFivesGuys();
	name4.whoAmI();

	return 0;
}