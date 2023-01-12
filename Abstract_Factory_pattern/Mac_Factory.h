#ifndef MAC_FACTORY_H
#define MAC_FACTORY_H

#include "IFactory.h"

class Mac_Factory : public IFactory
{
    public:
        IButton* create_button() override;
        ITextbox* create_textbox() override;
};

#endif