#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) {
    std::cout << "Constructor with a name called! (Dog)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor called! (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    std::cout << "Assigned operation called! (Dog)" << std::endl;
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog &other) : Animal(other){
    std::cout << "Copy constructor called! (Dog)" << std::endl;
}

const std::string &Dog::getType() const {
    return Animal::getType();
}

void Dog::makeSound() const{
    std::cout << "Make sound: I'm a Dog" << std::endl;
}