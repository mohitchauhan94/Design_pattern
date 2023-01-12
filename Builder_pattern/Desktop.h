#ifndef DESKTOP_H
#define DESKTOP_H

#include <iostream>
using namespace std;

class Desktop
{
    string m_monitor;
    string m_keyboard;
    string m_mouse;
    string m_processor;
    public:
        void set_monitor(string monitor);
        void set_keyboard(string keyboard);
        void set_mouse(string mouse);
        void set_processor(string processor);
        void get_specs();
};

#endif