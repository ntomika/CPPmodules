#include "Character.hpp"

Character::Character()
{
	this->_name = "default_name";
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	this->_name = src.getName();
	// for(int i = 0; i < 4; i++)
	// {
	// 	if (_inventory[i] != NULL)
	// 		delete _inventory[i];
	// }
}

Character::~Character ()
{
	// for(int i = 0; i < 4; i++)
	// 	delete _inventory[i];
}

std::string const & Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
			this->_inventory[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
		return;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
		return;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}