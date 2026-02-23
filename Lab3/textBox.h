#include <iostream>

class TextBox {
    private:
    std::string value;

    public:
        TextBox(){
            std::cout << "Constructed new box" << std::endl;
        }
        TextBox(std::string val){
            value = val;
            std::cout << "Constructed new box" << std::endl;
        }
        ~TextBox(){
            std::cout << "Destructed box" << std::endl;
        }
        std::string getValue(){
            return value;
        }
        void setValue(std::string val){
            value = val;
        }
};