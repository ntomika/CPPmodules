#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombies " << name << " rise from the dead" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << name
	<< " was killed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}