#include "TextBox.h"
#include <iostream>

TextBox::TextBox() {
    std::cout << "Constructed new box" << std::endl;
}

TextBox::TextBox(std::string val) {
    value = val;
    std::cout << "Constructed new box" << std::endl;
}

TextBox::~TextBox() {
    std::cout << "Destructed box" << std::endl;
}

std::string TextBox::getValue() {
    return value;
}

void TextBox::setValue(std::string val) {
    value = val;
}