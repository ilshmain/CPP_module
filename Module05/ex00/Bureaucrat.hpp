#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
# define DEFAULT	"\033[0m"
# define RED		"\033[31m"


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

    void increment();
    void decrement();


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
