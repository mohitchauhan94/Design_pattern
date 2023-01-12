#include "Windows_Factory.h"
#include "Windows_Button.h"
#include "Windows_Textbox.h"
#include <iostream>

using namespace std;

IButton* Windows_Factory::create_button()
{
    return new Windows_Button();
}

ITextbox* Windows_Factory::create_textbox()
{
    return new Windows_Textbox();
}