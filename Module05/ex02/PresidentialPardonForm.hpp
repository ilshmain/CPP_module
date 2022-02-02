#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "ShrubberyCreationForm.hpp"


#include "Form.hpp"

class PresidentialPardonForm : public Form{
private:
    std::string target;
public:
    static int count;
    PresidentialPardonForm();

    PresidentialPardonForm(const std::string &target);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    void info(ShrubberyCreationForm &shubbery) const;
    void info() const;
};
#endif
