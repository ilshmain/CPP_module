#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    virtual ~AMateria();

    AMateria (const AMateria &other);
    AMateria &operator=(const AMateria &other);

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;

    const std::string &getType() const;
};

#include "ICharacter.hpp"
#endif
