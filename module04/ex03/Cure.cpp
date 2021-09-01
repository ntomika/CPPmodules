#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure() {}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *obj = new Cure();

	return obj;
}