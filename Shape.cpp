#include "Shape.h"

Shape::Shape() : background("Default") {}

std::string Shape::getBackground() const {
    return background;
}

void Shape::setBackground(const std::string& bg) {
    background = bg;
}

void Shape::draw() const {
    std::cout << "Drawing a generic Shape with background: " << background << std::endl;
}