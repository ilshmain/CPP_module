#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog();
    Dog(const std::string &type);
    virtual ~Dog();

    Dog &operator=(const Dog &other);
    Dog(const Dog &other);

    const std::string &getType() const;

    void makeSound() const;

};


#endif
