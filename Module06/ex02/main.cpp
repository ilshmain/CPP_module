#include <iostream>
#include <unistd.h>

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

int GetRandomNumber(int min, int max)
{
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

Base *generate(void) {
    int i = GetRandomNumber(1, 3);
    std::cout << i << std::endl;
    switch (i) {
        case 1: return new A;
        case 2: return new B;
        case 3: return new C;
    }
    return new A;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << 'A' << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << 'B' << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << 'C' << std::endl;
}

void identify(Base& p) {
    if ((char*)&p == NULL)
    {
        std::cout << "Something strange happened" << std::endl;
        return ;
    }
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << 'A' << std::endl;
    }
    catch (std::bad_cast) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << 'B' << std::endl;
    }
    catch (std::bad_cast) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << 'C' << std::endl;
    }
    catch (std::bad_cast) {}
}

int	main()
{
    Base *one = generate();
    usleep(1000);
    Base *two = generate();
    usleep(1000);
    Base *three = generate();
    Base *four = generate();
    Base *five = generate();
    Base *six = generate();

    identify(one);
    identify(two);
    identify(three);
    identify(four);
    identify(five);
    identify(six);

    identify(*one);
    identify(*two);
    identify(*three);
    identify(*four);
    identify(*five);
    identify(*six);

    delete one;
    delete two;
    delete three;
    delete four;
    delete five;
    delete six;
}