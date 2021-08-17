#include "Zombie.hpp"

void	Zombie::getName(std::string getname)
{
	this->_name = getname;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombies" << name << " zombie was created on the stack" << std::endl;
}
Zombie::Zombie()
{
	std::cout << "Zombies" << _name << " was created dynamically" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << _name
	<< " was killed" << std::endl << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}