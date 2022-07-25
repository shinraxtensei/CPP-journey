#include "Converter.hpp"

// define red and yellow color for the console
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"


int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << RED"Command Not Formatted Well" RESET << std::endl
      << YELLOW "./convert [ Convert Input ]" RESET << std::endl;
  } 
  else 
  {
    Converter c(argv[1]);
    c.toChar();
    c.toInt();
    c.toFloat();
    c.toDouble();
  }
  return 0;
}