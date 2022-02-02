#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm() : Form("DefaultName", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
        : Form("PresidentialPardonForm", 25, 5) {
    this->target = target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    this->setFormName(other.getFormName());
    this->setGradeExecute(other.getGradeExecute());
    this->setGradeSign(other.getGradeSign());
    this->setSign(other.isSign());

    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other.getFormName(), other.getGradeSign(), other.getGradeExecute()) {}

void PresidentialPardonForm::info(ShrubberyCreationForm &shubbery) const {
    std::cout << shubbery.getFormName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::info() const {

}

const std::string &PresidentialPardonForm::getTarget() const
{
    return this->target;
}

