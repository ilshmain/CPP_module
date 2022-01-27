#ifndef INC_00_ANIMAL_HPP
#define INC_00_ANIMAL_HPP
#include <iostream>


class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(const std::string &type);
    virtual ~Animal();

    Animal &operator=(const Animal &other);
    Animal(const Animal &other);

    const std::string &getType() const;
    virtual void makeSound() const = 0;
};


#endif
