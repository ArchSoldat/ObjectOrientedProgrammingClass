#include "Circle.h"

Circle::Circle() : radius(0.0f) {}

Circle::Circle(float r) : radius(r) {}

void Circle::draw() const {
    std::cout << "Drawing a Circle [Radius: " << radius 
              << ", Background: " << getBackground() << "]" << std::endl;

    for (int r = 0; r < radius; r++){
        for (int pos = 0; pos < radius*2; pos++){
            if (pos >= radius/2 && pos <= radius/2) std::cout << "O";
        }
        std::cout << std::endl;
    }
}

float Circle::getArea() const {
    return 3.14159f * radius * radius;
}

float Circle::getPerimeter() const {
    return 2.0f * 3.14159f * radius;
}