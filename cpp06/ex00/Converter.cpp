#include "Converter.hpp"


Converter::Converter() {this->_input = "";}
Converter::Converter(const std::string& input) {this->_input = input;}
Converter::Converter(const Converter& c) {this->_input = c._input;}
Converter::~Converter() {}


bool Converter::isPseudoLiteral() {
    return this->_input == "nan" || this->_input == "nanf" || this->_input == "+inf" || this->_input == "inf" || this->_input == "-inf"
            || this->_input == "+inff" || this->_input == "inff" || this->_input == "-inff";
}


void Converter::toChar()  {
    if (isPseudoLiteral()) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    
    this->char_value = static_cast<char>(atoi(this->_input.c_str()));
    if (this->char_value < ' ' || this->char_value > '~') {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    std::cout << this->char_value << std::endl;
}


void Converter::toInt() {
    if (isPseudoLiteral()) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    std::cout << std::atoi(this->_input.c_str()) << std::endl;
}

void Converter::toFloat() {
    this->float_value = std::strtof(this->_input.c_str(), nullptr);

    if (this->float_value - static_cast<int>(this->float_value) == 0) {
        std::cout << this->float_value << ".0f" << std::endl;
        return ;
    }
    std::cout << this->float_value << "f" << std::endl;
}

void Converter::toDouble() {
    this->double_value = std::strtod(this->_input.c_str(), nullptr);

    if (this->double_value - static_cast<int>(this->double_value) == 0) {
        std::cout << this->double_value << ".0" << std::endl;
        return ;
    }
    std::cout << this->double_value << std::endl;
}