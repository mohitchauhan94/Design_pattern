#include "Dell_Builder.h"

void Dell_Builder::build_monitor()
{
    m_desktop->set_monitor("Dell monitor");
}

void Dell_Builder::build_mouse()
{
    m_desktop->set_mouse("Dell mouse");
}

void Dell_Builder::build_keyboard()
{
    m_desktop->set_keyboard("Dell keyboard");
}

void Dell_Builder::build_processor()
{
    m_desktop->set_processor("Dell processor");
}