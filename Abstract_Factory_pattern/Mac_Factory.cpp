#include "Mac_Factory.h"
#include "Mac_Button.h"
#include "Mac_Textbox.h"

IButton* Mac_Factory::create_button()
{
    return new Mac_Button();
}

ITextbox* Mac_Factory::create_textbox()
{
    return new Mac_Textbox();
}