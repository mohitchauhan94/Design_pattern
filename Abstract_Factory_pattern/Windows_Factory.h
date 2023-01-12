#ifndef WINDOWS_FACTORY_H
#define WINDOWS_FACTORY_H

#include "IFactory.h"

class Windows_Factory : public IFactory
{
    public:
        IButton* create_button() override;
        ITextbox* create_textbox() override;
};

#endif