#include "Rectangle.h"

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::draw() const {
    std::cout << "Drawing a Rectangle [Width: " << width 
              << ", Height: " << height 
              << ", Background: " << getBackground() << "]" << std::endl;
    
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++) std::cout << "O";
        std::cout << std::endl;
    }
}

int Rectangle::getArea() const {
    return width * height;
}