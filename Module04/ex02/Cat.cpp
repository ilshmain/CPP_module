#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()){
    std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type) , brain(new Brain()){
    std::cout << "Constructor with a name called! (Cat)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called! (Cat)" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &other){
    std::cout << "Assigned operation called! (Cat)" << std::endl;
    *this->brain = *other.brain;
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &other) : Animal(other){
    this->brain = new Brain(*other.brain);
    std::cout << "Copy constructor called! (Cat)" << std::endl;
}

const std::string &Cat::getType() const {
    return Animal::getType();
}

void Cat::makeSound() const{
    std::cout << "Make sound: I'm a cat" << std::endl;
}

