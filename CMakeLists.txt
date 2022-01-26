cmake_minimum_required(VERSION 3.20)
project(00)

set(CMAKE_CXX_STANDARD 98)

#add_executable(00 Module00/ex01/main.cpp Module00/ex01/Contact.cpp Module00/ex01/Contact.hpp Module00/ex01/PhoneBook.cpp Module00/ex01/PhoneBook.hpp)
#add_executable(00 Module00/ex02/test.cpp Module00/ex02/Account.hpp Module00/ex02/Account.cpp)


#add_executable(00 Module01/ex00/main.cpp
#        Module01/ex00/newZombie.cpp
#        Module01/ex00/randomChump.cpp
#        Module01/ex00/Zombie.cpp
#        Module01/ex00/Zombie.hpp)

#add_executable(00 Module01/ex01/Zombie.cpp
#        Module01/ex01/main.cpp
#        Module01/ex01/Zombie.hpp
#        Module01/ex01/ZombieHorde.cpp)

#add_executable(00 Module01/ex03/HumanA.cpp
#        Module01/ex03/HumanA.hpp
#        Module01/ex03/HumanB.cpp
#        Module01/ex03/HumanB.hpp
#        Module01/ex03/main.cpp
#        Module01/ex03/Weapon.cpp
#        Module01/ex03/Weapon.hpp)


#add_executable(00 Module03/ex002/ClapTrap.cpp
#        Module03/ex002/ClapTrap.hpp
#        Module03/ex002/FragTrap.cpp
#        Module03/ex002/FragTrap.hpp
#        Module03/ex002/main.cpp
#        Module03/ex002/ScavTrap.cpp
#        Module03/ex002/ScavTrap.hpp)

add_executable(00  Module04/ex00/Animal.cpp
        Module04/ex00/Animal.hpp
        Module04/ex00/Dog.cpp
        Module04/ex00/Dog.hpp
        Module04/ex00/Cat.cpp
        Module04/ex00/Cat.hpp
        Module04/ex00/WrongAnimal.cpp
        Module04/ex00/WrongAnimal.hpp
        Module04/ex00/WrongCat.cpp
        Module04/ex00/WrongCat.hpp
        Module04/ex00/main.cpp)
