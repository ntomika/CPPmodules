#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name)
{
	Zombie	*newHorde;
	newHorde = new Zombie[N];
	newHorde->getName(name);
	for (int i = 0; i < N; i++)
		newHorde[i].getName(name);
	return (newHorde);
}