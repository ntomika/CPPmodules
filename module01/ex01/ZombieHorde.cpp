#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name)
{
	std::string	tmp = name;
	Zombie	*newHorde;

	newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		newHorde[i].getName(tmp);
		tmp += name;
	}
	return (newHorde);
}