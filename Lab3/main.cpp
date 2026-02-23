#include <iostream>
#include "textBox.h" // Quotes indicate that the class is within the directory


int main() // Main will run automatically when the file is executed in the compiler
{
    TextBox box1;
    TextBox box2("Defined in initialization");

    std::cout << "Box 1 string value: " << box1.getValue() << std::endl;

    box1.setValue("I just set this value");

    std::cout << "Box 1 new string value: " << box1.getValue() << std::endl;
    std::cout << "Box 2 string value: " << box2.getValue() << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
