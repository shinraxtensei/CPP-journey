#pragma once 

#include <iostream>
#include <string>


class Converter
{
  private:
    std::string _input;
    char char_value;
    int int_value;
    float float_value;
    double double_value;
  public:
    Converter();
    Converter(const std::string& input);
    Converter(const Converter& c);
    ~Converter();


    void toChar();
    void toInt();
    void toFloat();
    void toDouble();

    bool isPseudoLiteral();

};