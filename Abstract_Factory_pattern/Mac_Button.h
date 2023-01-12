#ifndef MAC_BUTTON_H
#define MAC_BUTTON_H

#include "IButton.h"

class Mac_Button : public IButton
{
    public:
        void press() override;
};

#endif