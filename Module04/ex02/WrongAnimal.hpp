#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &other);
    WrongAnimal(const WrongAnimal &other);

    const std::string &getType() const;

    virtual void makeSound() const;
};

#endif
