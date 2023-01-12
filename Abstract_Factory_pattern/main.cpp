#include "GUI_Factory.h"

int main()
{
    IFactory *wind_fact = GUI_Factory::create_factory("windows");
    
    IButton *wind_button = wind_fact->create_button();
    wind_button->press();

    ITextbox *wind_textbox = wind_fact->create_textbox();
    wind_textbox->show_text();

    IFactory *mac_fact = GUI_Factory::create_factory("mac");

    IButton *mac_button = mac_fact->create_button();
    mac_button->press();

    ITextbox *mac_textbox = mac_fact->create_textbox();
    mac_textbox->show_text();

    return 0;
}