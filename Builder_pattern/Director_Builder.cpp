#include "Director_Builder.h"

void Director_Builder::build_desktop()
{
    m_desktop_builder->build_monitor();
    m_desktop_builder->build_keyboard();
    m_desktop_builder->build_mouse();
    m_desktop_builder->build_processor();
}

Desktop* Director_Builder::get_desktop()
{
    return m_desktop_builder->get_desktop();
}