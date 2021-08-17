#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void		announce(void);
	void		getName(std::string getname);
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif