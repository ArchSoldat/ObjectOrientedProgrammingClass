#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <iostream>

class Shape {
private:
    std::string background;
public:
    Shape();
    virtual ~Shape() = default; 
    
    std::string getBackground() const;
    void setBackground(const std::string& bg);
    
    // Virtual function to be overridden by derived classes
    virtual void draw() const; 
};

#endif