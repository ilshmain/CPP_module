#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete materias[i];
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    for(int i = 0; i < 4; i++) {
        this->materias[i] = other.materias[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    for (int i = 0; i < 4; i++) {
        this->materias[i] = other.materias[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; i++) {
        if (this->materias[i] && this->materias[i]->getType() == type )
            return this->materias[i]->clone();
    }
    return NULL;
}
