#include "Zombie.hpp"

std::string	Zombie::getName(std::string getname)
{
	this->name = getname;
	return this->name;
}

Zombie::Zombie()
{
	std::cout << "Zombies horde was created" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << name
	<< " was killed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}