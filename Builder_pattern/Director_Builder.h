#ifndef DIRECTOR_BUILDER_H
#define DIRECTOR_BUILDER_H

#include "Desktop_Builder.h"

class Director_Builder
{
    Desktop_Builder *m_desktop_builder;
    public:
        Director_Builder(Desktop_Builder *desktop_builder) : m_desktop_builder(desktop_builder)
        {}

        void build_desktop();
        Desktop* get_desktop();
};

#endif