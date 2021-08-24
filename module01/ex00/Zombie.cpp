#include "Zombie.hpp"

void	Zombie::getName(std::string getname)
{
	this->_name = getname;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombies " << this->_name << " zombie was created on the heap" << std::endl;
}
Zombie::Zombie()
{
	std::cout << "Zombies was created on the stack" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << _name
	<< " was killed" << std::endl << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}