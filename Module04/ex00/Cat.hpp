#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(const std::string &type);
    virtual ~Cat();

    Cat &operator=(const Cat &other);
    Cat(const Cat &other);

    const std::string &getType() const;

    void makeSound() const;
};


#endif
