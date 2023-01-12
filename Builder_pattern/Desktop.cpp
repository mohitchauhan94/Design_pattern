#include "Desktop.h"

void Desktop::set_monitor(string monitor)
{
    m_monitor = monitor;
}

void Desktop::set_keyboard(string keyboard)
{
    m_keyboard = keyboard;
}

void Desktop::set_processor(string processor)
{
    m_processor = processor;
}

void Desktop::set_mouse(string mouse)
{
    m_mouse = mouse;
}

void Desktop::get_specs()
{
    std::cout << "Product specifications are: " << std::endl;
    std::cout << "monitor is: " << m_monitor << std::endl;
    std::cout << "keyboard is: " << m_keyboard << std::endl;
    std::cout << "mouse is: " << m_mouse << std::endl;
    std::cout << "processor is: " << m_processor << std::endl;
}