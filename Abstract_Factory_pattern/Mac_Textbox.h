#ifndef MAC_TEXTBOX_H
#define MAC_TEXTBOX_H

#include "ITextbox.h"

class Mac_Textbox : public ITextbox
{
    public:
        void show_text() override;
};

#endif