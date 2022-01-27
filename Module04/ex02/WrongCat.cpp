#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "Default constructor called! (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
    std::cout << "Constructor with a name called! (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called! (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    std::cout << "Assigned operation called! (WrongCat)" << std::endl;
    this->type = other.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
    std::cout << "Copy constructor called! (WrongCat)" << std::endl;
}

const std::string &WrongCat::getType() const {
    return WrongAnimal::getType();
}

void WrongCat::makeSound() const{
    std::cout << "Make sound: I'm a WrongCat" << std::endl;
}
