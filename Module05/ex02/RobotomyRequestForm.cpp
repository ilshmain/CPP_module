#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::count = 1;

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
        : Form("RobotomyRequestForm", 72, 45) {
    this->target = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    this->setFormName(other.getFormName());
    this->setGradeExecute(other.getGradeExecute());
    this->setGradeSign(other.getGradeSign());
    this->setSign(other.isSign());

    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other.getFormName(), other.getGradeSign(), other.getGradeExecute()) {}

void RobotomyRequestForm::info(ShrubberyCreationForm &shubbery) const {
    count++;
    std::cout << "Makes some drilling noises" << std::endl;
    if (count % 2 == 0) {
        std::cout << shubbery.getFormName() << " has been robotomized" << std::endl;
    } else {
        std::cout << shubbery.getFormName() << " don't has been robotomized" << std::endl;
    }
}

void RobotomyRequestForm::info() const {
}


