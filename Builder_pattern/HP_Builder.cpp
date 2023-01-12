#include "HP_Builder.h"

void HP_Builder::build_monitor()
{
    m_desktop->set_monitor("HP monitor");
}

void HP_Builder::build_mouse()
{
    m_desktop->set_mouse("HP mouse");
}

void HP_Builder::build_keyboard()
{
    m_desktop->set_keyboard("HP keyboard");
}

void HP_Builder::build_processor()
{
    m_desktop->set_processor("HP processor");
}