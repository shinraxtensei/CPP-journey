#include "iter.hpp"


void times_two(int const &n) {
    std::cout << n * 10 << std::endl;
}

void print(std::string const &s) 
{
//  iterate through the string and print each character
    for (size_t i = 0; i < s.size(); i++)
    {
        std::cout << static_cast<char>(std::toupper(s[i]));
    }
    std::cout << std::endl;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};

    iter(array, 5, times_two);

    std::string strings[] = {"hello", "labas", "aloo"  ,"test"};

    iter(strings, 3, print);
    
}