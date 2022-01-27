#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default constructor called! (Brain)" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destructor called! (Brain)" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Copy constructor called! (Brain)" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->idea[i] = other.idea[i];
    }
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Assigned operation called! (Brain)" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->idea[i] = other.idea[i];
    }
    return *this;
}