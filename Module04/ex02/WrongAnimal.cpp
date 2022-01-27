#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Default constructor called! (WrongAnimal)" << std::endl;
    this->type = "Default";
}
WrongAnimal::WrongAnimal(const std::string &type) : type(type) {
    std::cout << "Constructor with a name called! (WrongAnimal)" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "Make sound: I'm a WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "Assigned operation called! (WrongAnimal)" << std::endl;
    this->type = other.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "Copy constructor called! (WrongAnimal)" << std::endl;
    this->type = other.type;
}

const std::string &WrongAnimal::getType() const {
    return type;
}
