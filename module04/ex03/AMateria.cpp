#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria()
{
	this->_type = "default_type";
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return this->_type;
}
