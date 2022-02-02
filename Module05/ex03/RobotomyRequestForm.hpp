#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm : public Form{
private:
    std::string target;
public:
    static int count;
    RobotomyRequestForm();

    RobotomyRequestForm(const std::string &target);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(const RobotomyRequestForm &other);

    void info() const;
    void info(ShrubberyCreationForm &shubbery) const;

    const std::string &getTarget() const;
};


#endif
