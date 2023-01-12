#ifndef WINDOWS_TEXTBOX_H
#define WINDOWS_TEXTBOX_H

#include "ITextbox.h"

class Windows_Textbox : public ITextbox
{
    public:
        void show_text() override;
};

#endif