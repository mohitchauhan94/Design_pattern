#ifndef IFACTORY_H
#define IFACTORY_H

#include "IButton.h"
#include "ITextbox.h"

class IFactory
{
    public:
        virtual IButton* create_button()=0;
        virtual ITextbox* create_textbox()=0;
};

#endif