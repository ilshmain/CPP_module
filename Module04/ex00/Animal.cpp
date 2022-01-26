#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default constructor called! (Animal)" << std::endl;
    this->type = "Default";
}
Animal::Animal(const std::string &type) : type(type) {
    std::cout << "Constructor with a name called! (Animal)" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Make sound in (Animal) class" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor called! (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Assigned operation called! (Animal)" << std::endl;
    this->type = other.type;
    return *this;
}

Animal::Animal(const Animal &other) {
    std::cout << "Copy constructor called! (Animal)" << std::endl;
    this->type = other.type;
}

const std::string &Animal::getType() const{
    return type;
}
