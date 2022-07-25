#include "Array.hpp"

int main ()
{

    try{
    Array<int> a(5);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        a[3] = 4;
        a[4] = 5;
        // a[5] = 6;
        for (int i = 0; i < a.size(); i++)
            std::cout << a[i] << "\t";
    }
    catch(Array<int>::outofrange &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Array<std::string> a(5);
        a[0] = "Hello";
        a[1] = "World";
        a[2] = "test";
        a[3] =" allo";
        a[4] = "!";
        // a[5] = "!";
        for (int i = 0; i < a.size(); i++)
            std::cout << a[i] << "\t";
    }
    catch(Array<std::string>::outofrange &e){
        std::cout << e.what() << std::endl;
    }

}