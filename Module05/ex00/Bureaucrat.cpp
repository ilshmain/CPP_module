#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException("Gradle error");
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException("Gradle error");
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}


const std::string &Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}


Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &error) : error(error) {
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return this->error.c_str();
}


Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &error) : error(error) {
    std::cout << "Exception thrown: " << error << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return this->error.c_str();
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << "Bureaucrat " << bureaucrat.name << " is his grade " << bureaucrat.grade;
    return os;
}

void Bureaucrat::increment() {
    std::cout << name + ": increment" << std::endl;
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException("Bureaucrat " +name + " increment error");
    this->grade--;
}

void Bureaucrat::decrement() {
    std::cout << name + ": decrement" << std::endl;
    if (grade == 150)
        throw Bureaucrat::GradeTooHighException("Bureaucrat " +name + " decrement error");
    this->grade++;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    this->name = other.name;
    this->grade = other.grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    this->name = other.getName();
    this->grade = other.getGrade();
}



