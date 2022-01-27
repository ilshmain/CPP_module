#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++) {
        this->aInventory[i] = NULL;
    }
}

Character::Character(const std::string &name) {
    this->name = name;
    for (int i = 0; i < 4; i++) {
        this->aInventory[i] = NULL;
    }
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete aInventory[i];
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (this->aInventory[i] == NULL)
        {
            this->aInventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;
    this->aInventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3 || aInventory[idx] == NULL)
        return ;
    aInventory[idx]->use(target);
}

Character::Character(const Character &other) {
    this->name = other.name;
    for(int i = 0; i < 4; i++) {
        this->aInventory[i] = other.aInventory[i];
    }
}

Character &Character::operator=(const Character &other) {
    for (int i = 0; i < 4; ++i)
    {
        delete aInventory[i];
        aInventory[i] = other.aInventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName() const {
    return this->name;
}



