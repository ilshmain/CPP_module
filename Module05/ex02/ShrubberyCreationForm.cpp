#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("DefaultName", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
        : Form("ShrubberyCreationForm", 145, 137)  {
    this->target = target;
    ShrubberyCreationForm::info();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    this->setFormName(other.getFormName());
    this->setGradeExecute(other.getGradeExecute());
    this->setGradeSign(other.getGradeSign());
    this->setSign(other.isSign());

    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getFormName(), other.getGradeSign(), other.getGradeExecute()) {}

void ShrubberyCreationForm::printTrees() const{
    std::ofstream tree(this->target+"_shrubbery ");
    dopPrint('*', 3, &tree);
    dopPrint('*', 5, &tree);
    dopPrint('*', 7, &tree);
}

void ShrubberyCreationForm::dopPrint(char s, int len, std::ofstream *tree) const{
    int maxLen = 7;
    int count;

    for (int i = 1; i <= len; i += 2) {
        count = 0;
        while (count < (maxLen - i) / 2)
        {
            *tree << " ";
            count++;
        }
        count = i;
        while (count > 0)
        {
            *tree << s;
            count--;
        }
        count = 0;
        while (count < (maxLen - i) / 2)
        {
            *tree << " ";
            count++;
        }
        *tree << "\n";
    }
}

void ShrubberyCreationForm::info() const {
    this->printTrees();
}

