#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->_copyInventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{

}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_copyInventory[i] == NULL)
		{
			this->_copyInventory[i] = materia;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_copyInventory[i] != NULL)
		{
			if (this->_copyInventory[i]->getType().compare(type) == 0)
				return this->_copyInventory[i]->clone();
		}
	}
	return 0;
}