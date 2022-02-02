#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string formName;
    bool sign;
    int  gradeSign;
    int  gradeExecute;
public:
    Form(const std::string &name, const int gradeSign, const int gradeExecute);
    virtual ~Form();

    Form &operator=(const Form &other);
    Form(const Form &other);

    void beSigned(Bureaucrat &bureaucrat);

    const std::string &getFormName() const;

    bool isSign() const;

    int getGradeSign() const;

    int getGradeExecute() const;


    class GradeTooHighException : public std::exception {
    public:
        std::string error;

        GradeTooHighException(const std::string &error);
        GradeTooHighException();
        virtual ~GradeTooHighException() throw();
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        std::string error;

        GradeTooLowException(const std::string &error);
        GradeTooLowException();
        virtual ~GradeTooLowException() throw();
        const char* what() const throw();
    };
    friend std::ostream &operator<<(std::ostream &os, const Form &form);
};

#endif
