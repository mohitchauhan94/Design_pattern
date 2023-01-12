#ifndef DESKTOP_BUILDER_H
#define DESKTOP_BUILDER_H

#include "Desktop.h"

class Desktop_Builder
{
    public:
        Desktop* m_desktop;
        Desktop_Builder(){
            m_desktop = new Desktop();
        }
        virtual void build_monitor() = 0;
        virtual void build_keyboard() = 0;
        virtual void build_mouse() = 0;
        virtual void build_processor() = 0;

        Desktop* get_desktop(){
            return m_desktop;
        }
};

#endif