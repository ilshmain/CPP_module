#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) {
    this->type = type;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &other) {
    this->type = other.type;
}

AMateria &AMateria::operator=(const AMateria &other) {
    this->type = other.type;
    return *this;
}

const std::string &AMateria::getType() const {
    return type;
}









