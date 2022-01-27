#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    virtual ~Cure();

    Cure (const AMateria &other);
    Cure &operator=(const Cure &other);

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif
