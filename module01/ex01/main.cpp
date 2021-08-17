#include "Zombie.hpp"

int	main()
{
	int	N = 5;
	Zombie *horde = zombieHorde(N, "NAME");
	for (int i = 0; i < N; i++)
		horde->announce();
	delete[] horde;
	return 0;
}