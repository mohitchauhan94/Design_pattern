#ifndef WINDOWS_BUTTON_H
#define WINDOWS_BUTTON_H

#include "IButton.h"

class Windows_Button : public IButton
{
    public:
        void press() override;
};

#endif