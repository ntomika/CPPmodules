#include "Zombie.hpp"

int	main(void)
{
	Zombie	*one;

	one = newZombie("ntomika1");
	one->getName("ntomika1");
	one->announce();
	delete one;
	randomChump("ntomika2");

	return 0;
}