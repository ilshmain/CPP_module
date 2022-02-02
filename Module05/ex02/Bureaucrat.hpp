#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "Form.hpp"

# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define AQUA		"\033[36m"

class Form;

class Bureaucrat {
private:
    std::string name;
    int grade;
public:
    Bureaucrat();
    virtual ~Bureaucrat();

    Bureaucrat(const std::string &name, int grade);

    Bureaucrat &operator=(const Bureaucrat &other);
    Bureaucrat(const Bureaucrat &other);

    void signForm(Form &form);

    void increment();
    void decrement();

    bool				execute(const Form &form);


    const std::string &getName() const;
    int getGrade() const;


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
    friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};

#endif
