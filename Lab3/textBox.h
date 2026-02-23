#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>

class TextBox {
    private:
        std::string value;

    public:
        TextBox();
        TextBox(std::string val);
        ~TextBox();
        std::string getValue();
        void setValue(std::string val);
};

#endif