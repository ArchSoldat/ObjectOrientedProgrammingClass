#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    float radius;
public:
    Circle();
    Circle(float r); 
    
    void draw() const override; // Overrides base class
    float getArea() const;
    float getPerimeter() const;
};

#endif