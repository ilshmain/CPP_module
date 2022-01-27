#ifndef WRONGCat_HPP
#define WRONGCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    WrongCat(const std::string &type);
    virtual ~WrongCat();

    WrongCat &operator=(const WrongCat &other);
    WrongCat(const WrongCat &other);

    const std::string &getType() const;
    void makeSound() const;
};


#endif
