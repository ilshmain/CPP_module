#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type) {
    std::cout << "Constructor with a name called! (Cat)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called! (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    std::cout << "Assigned operation called! (Cat)" << std::endl;
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &other) : Animal(other){
    std::cout << "Copy constructor called! (Cat)" << std::endl;
}

const std::string &Cat::getType() const {
    return Animal::getType();
}

void Cat::makeSound() const{
    std::cout << "Make sound: I'm a cat" << std::endl;
}