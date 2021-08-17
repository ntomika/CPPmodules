#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie1;

	zombie1 = newZombie("ntomika1");
	zombie1->getName("ntomika1");
	zombie1->announce();
	delete zombie1;
	randomChump("ntomika2");

	return 0;
}