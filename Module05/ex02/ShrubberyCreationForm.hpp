#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
private:
    std::string target;
public:
    ShrubberyCreationForm();

    ShrubberyCreationForm(const std::string &target);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);

    void info() const;
    void dopPrint(char s, int len, std::ofstream *tree) const;
    void printTrees() const;
};

#endif
