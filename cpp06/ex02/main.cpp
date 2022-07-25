#include "Base.hpp"

Base * generate(void)
{
    Base *p;
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0)
    {
        p = new A();
        std::cout << "A object created" << std::endl;
    }
    else if (i == 1)
    {
        p = new B();
        std::cout << "B object created" << std::endl;
    }
    else
    {
        p = new C();
        std::cout << "C object created" << std::endl;
    }
    return p;
}

void identify(Base* p)
{
    if (p == nullptr)
    {
        std::cout << "p is nullptr" << std::endl;
        return;
    }
    if (dynamic_cast<A*>(p))
    {
        std::cout << "p is an A object" << std::endl;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "p is a B object" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "p is a C object" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void) dynamic_cast<A&>(p);
        std::cout << "the Type is A" << std::endl;
    }
    catch (std::exception & e) {}
    try {
        (void) dynamic_cast<B&>(p);
        std::cout << "the Type is B" << std::endl;
    }
    catch (std::exception & e) {}
    try {
        (void) dynamic_cast<C&>(p);
        std::cout << "the Type is C" << std::endl;
    }
    catch (std::exception & e) {}
}


int main ()
{
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}