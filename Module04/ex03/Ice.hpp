#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    virtual ~Ice();

    Ice (const AMateria &other);
    Ice &operator=(const Ice &other);

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif
