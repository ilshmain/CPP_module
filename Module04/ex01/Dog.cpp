#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()){
    std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) , brain(new Brain()){
    std::cout << "Constructor with a name called! (Dog)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor called! (Dog)" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &other){
    std::cout << "Assigned operation called! (Dog)" << std::endl;
    *this->brain = *other.brain;
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog &other) : Animal(other){
    this->brain = new Brain(*other.brain);
    std::cout << "Copy constructor called! (Dog)" << std::endl;
}

const std::string &Dog::getType() const {
    return Animal::getType();
}

void Dog::makeSound() const{
    std::cout << "Make sound: I'm a Dog" << std::endl;
}
