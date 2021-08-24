#include "Zombie.hpp"

std::string	Zombie::getName(std::string getname)
{
	this->_name = getname;
	return this->_name;
}

Zombie::Zombie()
{
	std::cout << "Zombie was created" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << _name
	<< " was killed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}