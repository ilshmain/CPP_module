#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure() {}

Cure::Cure(const AMateria &other) : AMateria(other) {}

Cure &Cure::operator=(const Cure &other) {
    this->type = other.type;
    return *this;
}

AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout	<<	"* heals "		<< target.getName()
                 <<	"'s wounds *"	<< std::endl;
}
