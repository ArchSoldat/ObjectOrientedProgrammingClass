#include <iostream>
#include <vector>
#include <memory>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

// Function that passes a Shape object as an argument and calls draw
void showShape(const Shape* s) {
    if (s) {
        s->draw();
    }
}

int main() {
    // Polymorphic Collection using unique pointers
    std::vector<std::unique_ptr<Shape>> shapes;

    // Instantiate and configure a Rectangle
    auto rect = std::make_unique<Rectangle>(10, 5);
    rect->setBackground("Blue");

    // Instantiate and configure a Circle
    auto circ = std::make_unique<Circle>(7.5f);
    circ->setBackground("Red");

    // Add rectangle and circle to the vector
    shapes.push_back(std::move(rect));
    shapes.push_back(std::move(circ));

    std::cout << "--- Looping over vector directly ---" << std::endl;
    // Loop over the vector and draw
    for (const auto& shape : shapes) {
        shape->draw();
    }

    std::cout << "\n--- Using showShape() function ---" << std::endl;
    // Calling the standalone showShape function
    for (const auto& shape : shapes) {
        showShape(shape.get()); 
    }

    return 0;
}