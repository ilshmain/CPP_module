#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource{
private:
    AMateria *materias[4];
public:
    MateriaSource();
    virtual ~MateriaSource();

    MateriaSource (const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);

};


#endif
